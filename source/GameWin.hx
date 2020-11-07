package;

import flixel.FlxSprite;
import flixel.FlxState;

/**
	TODO: Add game loses and wins
**/
class GameWin extends FlxState {
	override public function create() {
		super.create();

		add(new FlxSprite(0, 0).loadGraphic('assets/images/gamewin.png'));
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
	}
}
