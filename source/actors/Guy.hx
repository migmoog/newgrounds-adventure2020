package actors;

import flixel.FlxSprite;
import flixel.FlxState;

#if ADVENT
import utils.OverlayGlobal as Global;
#else
import utils.Global;
#end

class Guy extends FlxSprite {
	public function new(scene:FlxState, _x:Float, _y:Float) {
		super(_x, _y);
		centerOrigin();
		loadGraphic(Global.asset('assets/images/guy.png'), true, 8, 19);
		animation.add('walk', [0, 1], 4, true);

		scene.add(this);
	}

	override function update(elapsed:Float) {
		animation.play('walk');

		super.update(elapsed);
	}
}
