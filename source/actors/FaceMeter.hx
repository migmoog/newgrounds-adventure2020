package actors;

import flixel.FlxSprite;
import flixel.FlxState;

/**
	// !!TODO: set the frameIndex's in FaceMeter and raise the thresholds for changing frames !!

**/
class FaceMeter extends FlxSprite {
	public var happiness:Int;

	public function new(scene:FlxState, x:Float, y:Float) {
		super(x, y);
		loadGraphic('assets/images/facemeter.png', true, 16, 16);
		animation.frameIndex = 2;

		scene.add(this);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);

		// animation.frameIndex = Std.int(happiness / 4);
		switch (happiness) {
			case -4:
				animation.frameIndex = 0;
			case -2:
				animation.frameIndex = 1;
			case 0:
				animation.frameIndex = 2;
			case 4:
				animation.frameIndex = 3;
			case 8:
				animation.frameIndex = 4;
		}
	}
}
