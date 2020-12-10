package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class GameWin extends FlxState {
	var endGraphic:FlxSprite;
	
	override public function create() {
		super.create();

		endGraphic = new FlxSprite(0, 0).loadGraphic('assets/images/gamewin.png'); 
		add(endGraphic);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);
	}
}
