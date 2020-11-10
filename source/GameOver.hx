package;

import flixel.FlxSprite;
import flixel.FlxState;

class GameOver extends FlxState {
	override function create() {
		super.create();

		add(new FlxSprite(0, 0).loadGraphic('assets/images/gameover.png'));
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
	}
}
