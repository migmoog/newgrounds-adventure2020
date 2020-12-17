package;

import flixel.FlxGame;
import openfl.display.Sprite;

import ui.Controls;

class Main extends Sprite {
	public function new() {
		super();
		addChild(new FlxGame(192, 108, Creds, 1, 60, 60, true));
		
		Controls.init();
	}
}
