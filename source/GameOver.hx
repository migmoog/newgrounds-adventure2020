package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

import ui.Controls;
#if ADVENT
import utils.OverlayGlobal as Global;
#else
import utils.Global;
#end

class GameOver extends FlxState {
	var endGraphic:FlxSprite;

	override function create() {
		endGraphic = new FlxSprite(0, 0).loadGraphic('assets/images/gameover.png');
		add(endGraphic);
		
		super.create();
	}

	override function update(elapsed:Float) {
		if (Controls.pressed.A) {
			Global.switchState(new ThinkPositive());
		}

		super.update(elapsed);
	}
}
