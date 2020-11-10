package actors;

import flixel.FlxSprite;
import flixel.FlxState;

class FaceMeter extends FlxSprite {
	public var happiness:Int;
	public final minHappy:Int = -5;
	public final maxHappy:Int = 5;

	public function new(scene:FlxState, x:Float, y:Float) {
		super(x, y);
		loadGraphic('assets/images/facemeter.png', true, 16, 16);

		scene.add(this);
	}

	override function update(elapsed:Float) {
		super.update(elapsed);

		switch (happiness) {
			case -4:
				animation.frameIndex = 0;
			case -3:
				animation.frameIndex = 1;
			case -2:
				animation.frameIndex = 2;
			case -1:
				animation.frameIndex = 3;
			case 0:
				animation.frameIndex = 4;
			case 1:
				animation.frameIndex = 5;
			case 2:
				animation.frameIndex = 6;
			case 3:
				animation.frameIndex = 7;
			case 4:
				animation.frameIndex = 8;
		}
	}
}
