package actors;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.math.FlxRandom;
import flixel.util.FlxTimer;

enum FlyingThoughtType {
	GOOD;
	BAD;
}

class FlyingThoughts extends FlxGroup {
	var canSpawn:Bool = false;
	var timeSinceCreated:Float = 0;
	var spawnTime:Float = 3;
	var spawnAmount:Int = 2;

	final rand:FlxRandom = new FlxRandom();

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
		for (i in 0...spawnAmount)
			add(new FlyingThought(rand.bool() ? -5 : FlxG.width + 5, rand.float(0, 99), rand.bool(25) ? GOOD : BAD));

		// recursion is cool!
		if (canSpawn)
			new FlxTimer().start(spawnTime, (_) -> {
				spawnThoughts();
			});
	}

	override function update(elapsed:Float) {
		super.update(elapsed);

		remove(getFirstDead());

		timeSinceCreated += elapsed;
		if (timeSinceCreated > 10) {
			spawnTime = 2.5;
			spawnAmount = 3;
		} else if (timeSinceCreated > 25) {
			spawnTime = 2;
			spawnAmount = 4;
		}
	}
}

class FlyingThought extends FlxSprite {
	public var type:FlyingThoughtType;

	var SPEED:Float;
	var destroyDistance:Float;
	final rand:FlxRandom = new FlxRandom();

	public function new(x:Float, y:Float, type:FlyingThoughtType) {
		super(x, y);
		loadGraphic(type == GOOD ? AssetPaths.goodthought__png : AssetPaths.badthought__png, true, 8, 8);

		this.type = type;

		if (x > FlxG.width) {
			SPEED = rand.float(-45, -75);
			destroyDistance = -5;
		} else if (x < 0) {
			SPEED = rand.float(45, 75);
			destroyDistance = FlxG.width + 5;
		}
	}

	override function update(elapsed:Float) {
		velocity.x = SPEED;

		if (x == destroyDistance)
			kill();

		super.update(elapsed);
	}
}
