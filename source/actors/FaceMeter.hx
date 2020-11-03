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

		scene.add(this);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);

		animation.frameIndex = happiness;
	}
}
