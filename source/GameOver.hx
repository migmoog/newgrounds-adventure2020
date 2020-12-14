package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class GameOver extends FlxState {
	var endGraphic:FlxSprite;

	override function create() {
		endGraphic = new FlxSprite(0, 0).loadGraphic('assets/images/gameover.png');
		add(endGraphic);
		
		super.create();
	}

	override function update(elapsed:Float) {
		if (FlxG.keys.pressed.A) {
			FlxG.switchState(new ThinkPositive());
		}

		super.update(elapsed);
	}
}
