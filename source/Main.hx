package;

import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite {
	public function new() {
		super();
		addChild(new FlxGame(192, 108, ThinkPositive, 1, 60, 60, true));
	}
}
