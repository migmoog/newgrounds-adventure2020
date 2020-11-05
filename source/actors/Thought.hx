package actors;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class Thought extends FlxSprite {
	public var happiness:Int = 0;

	final SPEED = 60;

	public function new(scene:FlxState, _x:Float, _y:Float) {
		super(_x, _y);

		loadGraphic(AssetPaths.thought_bubble__png, true, 16, 16);
		setSize(8, 8);
		centerOffsets();
		animation.add('think', [0, 1, 2, 3], 4);

		scene.add(this);
	}

	override function update(elapsed:Float) {
		animation.play('think');

		if (FlxG.keys.pressed.LEFT)
			velocity.x = -SPEED;
		else if (FlxG.keys.pressed.RIGHT)
			velocity.x = SPEED;
		else
			velocity.x = 0;

		if (FlxG.keys.pressed.UP)
			velocity.y = -SPEED;
		else if (FlxG.keys.pressed.DOWN)
			velocity.y = SPEED;
		else
			velocity.y = 0;

		super.update(elapsed);
	}
}
