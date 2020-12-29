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

class GameWin extends FlxState {
	var endGraphic:FlxSprite;
	
	override public function create() {
		endGraphic = new FlxSprite(0, 0).loadGraphic(Global.asset('assets/images/gamewin.png')); 
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
