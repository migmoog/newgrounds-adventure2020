package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class GameWin extends FlxState {
	var endGraphic:FlxSprite;
	
	override public function create() {
		endGraphic = new FlxSprite(0, 0).loadGraphic('assets/images/gamewin.png'); 
		add(endGraphic);
		
		super.create();
	}

	override function update(elapsed:Float) {
		if (FlxG.keys.pressed.R) {
			FlxG.switchState(new ThinkPositive());
		}
		
		super.update(elapsed);
	}
}
