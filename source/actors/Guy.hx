package actors;

import flixel.FlxSprite;
import flixel.FlxState;

class Guy extends FlxSprite {
	public function new(scene:FlxState, _x:Float, _y:Float) {
		super(_x, _y);
		centerOrigin();
		loadGraphic('assets/images/guy.png', true, 8, 19);
		animation.add('walk', [0, 1], 4, true);

		scene.add(this);
	}

	override function update(elapsed:Float) {
		animation.play('walk');

		super.update(elapsed);
	}
}
