package;

import actors.FaceMeter;
import actors.FlyingThoughts;
import actors.Guy;
import actors.Thought;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxPoint;
import flixel.text.FlxText;

// this is main state of the game
class ThinkPositive extends FlxState {
	var floor:FlxSprite;
	var guy:Guy;
	var flyingThoughts:FlyingThoughts;
	var thought:Thought;
	var thoughtCircs:FlxTypedGroup<FlxSprite>;
	var faceMeter:FaceMeter;

	// DEBUG
	var happinessDebugText:FlxText;

	override public function create() {
		bgColor = 0xff1f2f49;
		if (FlxG.sound.music == null)
			FlxG.sound.playMusic('assets/music/music.wav', 1, true);

		floor = new FlxSprite(0, 99).loadGraphic('assets/images/floor.png', false);
		add(floor);

		guy = new Guy(this, FlxG.width / 2, 81);

		thoughtCircs = new FlxTypedGroup<FlxSprite>(3);
		add(thoughtCircs);

		for (i in 0...3) {
			thoughtCircs.add(new FlxSprite(guy.x, i * 10).loadGraphic('assets/images/thoughtchain.png', true, 4, 4));
			thoughtCircs.members[i].animation.frameIndex = i;
		}

		flyingThoughts = new FlyingThoughts(this);
		faceMeter = new FaceMeter(this, guy.x - 19, guy.y - 12);
		thought = new Thought(this, guy.x - 16, guy.y - 5);

		// DEBUG
		happinessDebugText = new FlxText(0, 0, 0, Std.string(thought.happiness));
		add(happinessDebugText);
		// -----

		super.create();
	}

	override public function update(elapsed:Float) {
		FlxG.overlap(thought, flyingThoughts, (thought, flyingThought) -> {
			flyingThought.destroy();

			if (flyingThought.type == GOOD) {
				thought.happiness++;
			} else {
				thought.happiness--;
			}
		});

		placeOnLine(thoughtCircs.members, guy.x + 6, guy.y, thought.x + 8, thought.y + 8);

		if (thought.x < thoughtCircs.members[0].x) {
			thoughtCircs.members[0].flipX = true;
			faceMeter.x = guy.x + 8;
		} else {
			thoughtCircs.members[0].flipX = false;
			faceMeter.x = guy.x - 17;
		}

		// DEBUG
		happinessDebugText.text = Std.string(thought.happiness);
		// -----

		// !!TODO: set the frameIndex's in FaceMeter and raise the thresholds for changing frames !!
		faceMeter.happiness = thought.happiness;

		if (faceMeter.happiness == -6) {
			FlxG.switchState(new GameOver());
		}
		if (faceMeter.happiness == 12) {
			FlxG.switchState(new GameWin());
		}

		super.update(elapsed);
	}

	// this is a rewrite of https://github.com/photonstorm/phaser/blob/v3.22.0/src/actions/PlaceOnLine.js
	// it has slight edits because positional origins in flixel are always (0,0), instead of a gameobject's center in phaser
	function placeOnLine(items:Array<FlxSprite>, x1:Float, y1:Float, x2:Float, y2:Float):Void {
		function getPoints(_x1:Float, _y1:Float, _x2:Float, _y2:Float, quantity:Int):Array<FlxPoint> {
			var x1 = _x1;
			var y1 = _y1;
			var x2 = _x2;
			var y2 = _y2;

			var out = [];
			for (i in 0...quantity) {
				var position = i / quantity;

				var x = x1 + (x2 - x1) * position;
				var y = y1 + (y2 - y1) * position;

				out.push(new FlxPoint(x, y));
			}

			return out;
		}

		var points = getPoints(x1, y1, x2, y2, items.length);

		for (i in 0...items.length) {
			var item = items[i];
			var point = points[i];

			item.x = point.x - 4;
			item.y = point.y - 4;
		}
	}
}
