package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei378y4:typey6:BINARYy9:classNamey37:__ASSET__assets_images_badthought_asey2:idy32:assets%2Fimages%2Fbadthought.asegoR0i92R1y5:IMAGER3y37:__ASSET__assets_images_badthought_pngR5y32:assets%2Fimages%2Fbadthought.pnggoR0i1022R1R2R3y36:__ASSET__assets_images_facemeter_aseR5y31:assets%2Fimages%2Ffacemeter.asegoR0i725R1R7R3y36:__ASSET__assets_images_facemeter_pngR5y31:assets%2Fimages%2Ffacemeter.pnggoR0i400R1R2R3y32:__ASSET__assets_images_floor_aseR5y27:assets%2Fimages%2Ffloor.asegoR0i136R1R7R3y32:__ASSET__assets_images_floor_pngR5y27:assets%2Fimages%2Ffloor.pnggoR0i373R1R2R3y38:__ASSET__assets_images_goodthought_aseR5y33:assets%2Fimages%2Fgoodthought.asegoR0i91R1R7R3y38:__ASSET__assets_images_goodthought_pngR5y33:assets%2Fimages%2Fgoodthought.pnggoR0i603R1R2R3y30:__ASSET__assets_images_guy_aseR5y25:assets%2Fimages%2Fguy.asegoR0i289R1R7R3y30:__ASSET__assets_images_guy_pngR5y25:assets%2Fimages%2Fguy.pnggoR0zR1y4:TEXTR3y41:__ASSET__assets_images_images_go_here_txtR5y36:assets%2Fimages%2Fimages-go-here.txtgoR0i266R1R7R3y30:__ASSET__assets_images_man_pngR5y25:assets%2Fimages%2Fman.pnggoR0i659R1R2R3y41:__ASSET__assets_images_thought_bubble_aseR5y36:assets%2Fimages%2Fthought-bubble.asegoR0i270R1R7R3y41:__ASSET__assets_images_thought_bubble_pngR5y36:assets%2Fimages%2Fthought-bubble.pnggoR0i390R1R2R3y39:__ASSET__assets_images_thoughtchain_aseR5y34:assets%2Fimages%2Fthoughtchain.asegoR0i122R1R7R3y39:__ASSET__assets_images_thoughtchain_pngR5y34:assets%2Fimages%2Fthoughtchain.pnggoR0zR1R26R3y41:__ASSET__assets_sounds_sounds_go_here_txtR5y36:assets%2Fsounds%2Fsounds-go-here.txtgoR0i2114R1y5:MUSICR3y31:__ASSET__flixel_sounds_beep_mp3R5y26:flixel%2Fsounds%2Fbeep.mp3goR0i39706R1R41R3y33:__ASSET__flixel_sounds_flixel_mp3R5y28:flixel%2Fsounds%2Fflixel.mp3goR0i15744R1y4:FONTR3y35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfgoR0i29724R1R46R3y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfgoR0i519R1R7R3y36:__ASSET__flixel_images_ui_button_pngR5y33:flixel%2Fimages%2Fui%2Fbutton.pnggoR0i3280R1R7R3y39:__ASSET__flixel_images_logo_default_pngR5y36:flixel%2Fimages%2Flogo%2Fdefault.pnggh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_badthought_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_badthought_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_facemeter_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_facemeter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_floor_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_floor_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_goodthought_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_goodthought_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_guy_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_guy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_man_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_thought_bubble_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_thought_bubble_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_thoughtchain_ase extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_thoughtchain_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends flash.utils.ByteArray { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends flash.media.Sound { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends flash.media.Sound { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends flash.text.Font { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:keep @:file("assets/images/badthought.ase") @:noCompletion #if display private #end class __ASSET__assets_images_badthought_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/badthought.png") @:noCompletion #if display private #end class __ASSET__assets_images_badthought_png extends lime.graphics.Image {}
@:keep @:file("assets/images/facemeter.ase") @:noCompletion #if display private #end class __ASSET__assets_images_facemeter_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/facemeter.png") @:noCompletion #if display private #end class __ASSET__assets_images_facemeter_png extends lime.graphics.Image {}
@:keep @:file("assets/images/floor.ase") @:noCompletion #if display private #end class __ASSET__assets_images_floor_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/floor.png") @:noCompletion #if display private #end class __ASSET__assets_images_floor_png extends lime.graphics.Image {}
@:keep @:file("assets/images/goodthought.ase") @:noCompletion #if display private #end class __ASSET__assets_images_goodthought_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/goodthought.png") @:noCompletion #if display private #end class __ASSET__assets_images_goodthought_png extends lime.graphics.Image {}
@:keep @:file("assets/images/guy.ase") @:noCompletion #if display private #end class __ASSET__assets_images_guy_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/guy.png") @:noCompletion #if display private #end class __ASSET__assets_images_guy_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/man.png") @:noCompletion #if display private #end class __ASSET__assets_images_man_png extends lime.graphics.Image {}
@:keep @:file("assets/images/thought-bubble.ase") @:noCompletion #if display private #end class __ASSET__assets_images_thought_bubble_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/thought-bubble.png") @:noCompletion #if display private #end class __ASSET__assets_images_thought_bubble_png extends lime.graphics.Image {}
@:keep @:file("assets/images/thoughtchain.ase") @:noCompletion #if display private #end class __ASSET__assets_images_thoughtchain_ase extends haxe.io.Bytes {}
@:keep @:image("assets/images/thoughtchain.png") @:noCompletion #if display private #end class __ASSET__assets_images_thoughtchain_png extends lime.graphics.Image {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,8,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,8,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:font("C:/HaxeToolkit/haxe/lib/flixel/4,8,0/assets/fonts/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("C:/HaxeToolkit/haxe/lib/flixel/4,8,0/assets/fonts/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,8,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,8,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat.ttf"; #else ascender = null; descender = null; height = null; numGlyphs = null; underlinePosition = null; underlineThickness = null; unitsPerEM = null; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
