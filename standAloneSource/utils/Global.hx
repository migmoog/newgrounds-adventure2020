package utils;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxState;
import flixel.util.FlxTimer;

/**
 * This only exists so that the advent game can do some trickery with your game's
 * states, so that the game can be overlayed on top of the advent's state
 * @author George
 */
class Global
{
    public static var width(get, never):Int;
    inline static function get_width() return FlxG.width;
    public static var height(get, never):Int;
    inline static function get_height() return FlxG.height;
    public static var camera(get, never):FlxCamera;
    inline static function get_camera() return FlxG.camera;
    
    inline public static function switchState(state:FlxState)
    {
        FlxG.switchState(state);
    }
    
    inline public static function createTimer()
    {
        return new FlxTimer();
    }
}