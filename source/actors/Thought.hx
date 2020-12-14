package actors;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;

class Thought extends FlxSprite {
	public var happiness:Int = 0;

	final SPEED = 60;

	public function new(scene:FlxState, x:Float, y:Float) {
		super(x, y);

		loadGraphic('assets/images/thought-bubble.png', true, 16, 16);
		setSize(8, 8);
		centerOffsets();
		animation.add('think', [0, 1, 2, 3], 4);

		scene.add(this);
	}

	override function update(elapsed:Float) {
		animation.play('think');

		var left:Bool = FlxG.keys.anyPressed([LEFT, A]);
		var right:Bool = FlxG.keys.anyPressed([RIGHT, D]);
		var up:Bool = FlxG.keys.anyPressed([UP, W]);
		var down:Bool = FlxG.keys.anyPressed([DOWN, S]); 

		#if web
		if (left && right)
			velocity.x = 0;
		else if (left)
			velocity.x = -SPEED;
		else if (right)
			velocity.x = SPEED;
		else
			velocity.x = 0;

		if (up && down)
			velocity.y = 0;
		else if (up)
			velocity.y = -SPEED;
		else if (down)
			velocity.y = SPEED;
		else
			velocity.y = 0;
		#end

		super.update(elapsed);
	}
}
