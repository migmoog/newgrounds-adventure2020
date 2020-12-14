package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class Creds extends FlxState {
    var creds:FlxSprite;
    var goToGame:Bool = false;
    
    override public function create() {
		add(creds = new FlxSprite(0, 0).loadGraphic('assets/images/creds.png'));

		super.create();
    }
    
    override public function update(elapsed:Float) {
        if (FlxG.keys.justPressed.A && !goToGame) {
            creds.loadGraphic('assets/images/tut.png');
            goToGame = true;
        } else if (FlxG.keys.justPressed.A && goToGame) {
            FlxG.switchState(new ThinkPositive());
        }
        
        super.update(elapsed);
    }
}