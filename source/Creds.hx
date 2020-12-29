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

class Creds extends FlxState {
    var creds:FlxSprite;
    var goToGame:Bool = false;
    
    override public function create() {
		add(creds = new FlxSprite(0, 0).loadGraphic(Global.asset('assets/images/creds.png')));

		super.create();
    }
    
    override public function update(elapsed:Float) {
        if (Controls.justPressed.A && !goToGame) {
            creds.loadGraphic(Global.asset('assets/images/tut.png'));
            goToGame = true;
        } else if (Controls.justPressed.A && goToGame) {
            Global.switchState(new ThinkPositive());
        }
        
        super.update(elapsed);
    }
}