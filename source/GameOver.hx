package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class GameOver extends FlxState {
	override function create() {
		super.create();

		add(new FlxSprite(0, 0).loadGraphic('assets/images/gameover.png'));
	}

	override function update(elapsed:Float) {
		if (FlxG.keys.pressed.R) {
			FlxG.switchState(new ThinkPositive());
		}
		
		super.update(elapsed);
	}
}
