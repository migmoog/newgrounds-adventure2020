package actors;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.util.FlxTimer;

enum FlyingThoughtType {
	GOOD;
	BAD;
	VERY_BAD;
}

class FlyingThoughts extends FlxGroup {
	public var canSpawn:Bool = false;

	var timeSinceCreated:Float = 0;
	var spawnTime:Float = 3;
	var spawnAmount:Int = 2;

	public function new(scene:FlxState) {
		super();
		scene.add(this);

		canSpawn = true;
		if (canSpawn)
			new FlxTimer().start(spawnTime, (_) -> {
				spawnThoughts();
			});
	}

	function spawnThoughts() {
		for (i in 0...spawnAmount) {
			var statePickInt:Int = FlxG.random.int(0, 2);
			add(new FlyingThought(FlxG.random.bool() ? -5 : FlxG.width + 5, if (statePickInt == 0) GOOD else if (statePickInt == 2) BAD else VERY_BAD));
		}

		if (canSpawn)
			new FlxTimer().start(spawnTime, (_) -> {
				spawnThoughts();
			});
	}

	override function update(elapsed:Float) {
		remove(getFirstDead());

		timeSinceCreated += elapsed;
		if (timeSinceCreated > 10) {
			spawnTime = 2.5;
			spawnAmount = 3;
		} else if (timeSinceCreated > 12) {
			spawnTime = 2;
			spawnAmount = 4;
		} else if (timeSinceCreated > 14) {
			spawnTime = 1.5;
			spawnAmount = 5;
		} else if (timeSinceCreated > 16) {
			spawnTime = 1;
			spawnAmount = 6;
		}
		super.update(elapsed);
	}
}

class FlyingThought extends FlxSprite {
	public var type:FlyingThoughtType;

	var SPEED:Float;
	var destination:Float;

	public function new(x:Float, type:FlyingThoughtType) {
		super(x, FlxG.random.float(0, 90));
		loadGraphic(pickSprite(type), true, 8, 8);

		animation.add('fly', [0, 1, 2, 1], 4);

		this.type = type;

		if (x > FlxG.width) {
			SPEED = type == GOOD ? FlxG.random.float(-45, -75) : FlxG.random.float(-65, -85);
			destination = -5;
		} else if (x < 0) {
			SPEED = type == GOOD ? FlxG.random.float(45, 75) : FlxG.random.float(65, 85);
			destination = FlxG.width + 5;

			flipX = true;
		}
	}

	override function update(elapsed:Float) {
		velocity.x = SPEED;
		animation.play('fly');

		if (x == destination) {
			kill();
			destroy();
		}

		super.update(elapsed);
	}

	function pickSprite(type:FlyingThoughtType) {
		switch (type) {
			case GOOD:
				return 'assets/images/goodthought.png';
			case BAD:
				return 'assets/images/badthought.png';
			case VERY_BAD:
				return 'assets/images/verybadthought.png';
		}
	}
}
