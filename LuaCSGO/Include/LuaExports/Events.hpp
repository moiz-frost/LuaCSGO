#pragma once

namespace LuaCSGO
{
	enum Events {
		LUACSGO_EVENT_UNKNOWN,
		LUACSGO_EVENT_KEYDOWN,
		LUACSGO_EVENT_KEYUP,
		LUACSGO_EVENT_MOUSEDOWN,
		LUACSGO_EVENT_MOUSEUP,
		LUACSGO_EVENT_MOUSEMOVE
	};

	enum ButtonCodes {
		LUACSGO_BUTTON_NONE = 0x00,
		LUACSGO_BUTTON_LEFT = 0x01,
		LUACSGO_BUTTON_RIGHT = 0x02,
		LUACSGO_BUTTON_MIDDLE = 0x03,
		LUACSGO_BUTTON_MOUSE4 = 0x04,
		LUACSGO_BUTTON_MOUSE5 = 0x05
	};

	enum KeyCodes {
		LUACSGO_KEY_NONE = 0x00,
		LUACSGO_KEY_BACK = 0x08,
		LUACSGO_KEY_TAB = 0x09,
		LUACSGO_KEY_CLEAR = 0x0C,
		LUACSGO_KEY_RETURN = 0x0D,
		LUACSGO_KEY_SHIFT = 0x10,
		LUACSGO_KEY_CONTROL = 0x11,
		LUACSGO_KEY_ALT = 0x12,
		LUACSGO_KEY_PAUSE = 0x13,
		LUACSGO_KEY_CAPITAL = 0x14,
		LUACSGO_KEY_ESCAPE = 0x1B,
		LUACSGO_KEY_SPACE = 0x20,
		LUACSGO_KEY_PRIOR = 0x21,
		LUACSGO_KEY_NEXT = 0x22,
		LUACSGO_KEY_END = 0x23,
		LUACSGO_KEY_HOME = 0x24,
		LUACSGO_KEY_LEFT = 0x25,
		LUACSGO_KEY_UP = 0x26,
		LUACSGO_KEY_RIGHT = 0x27,
		LUACSGO_KEY_DOWN = 0x28,
		LUACSGO_KEY_PRINT = 0x2A,
		LUACSGO_KEY_INSERT = 0x2D,
		LUACSGO_KEY_DELETE = 0x2E,
		LUACSGO_KEY_0 = 0x30,
		LUACSGO_KEY_1 = 0x31,
		LUACSGO_KEY_2 = 0x32,
		LUACSGO_KEY_3 = 0x33,
		LUACSGO_KEY_4 = 0x34,
		LUACSGO_KEY_5 = 0x35,
		LUACSGO_KEY_6 = 0x36,
		LUACSGO_KEY_7 = 0x37,
		LUACSGO_KEY_8 = 0x38,
		LUACSGO_KEY_9 = 0x39,
		LUACSGO_KEY_A = 0x41,
		LUACSGO_KEY_B = 0x42,
		LUACSGO_KEY_C = 0x43,
		LUACSGO_KEY_D = 0x44,
		LUACSGO_KEY_E = 0x45,
		LUACSGO_KEY_F = 0x46,
		LUACSGO_KEY_G = 0x47,
		LUACSGO_KEY_H = 0x48,
		LUACSGO_KEY_I = 0x49,
		LUACSGO_KEY_J = 0x4A,
		LUACSGO_KEY_K = 0x4B,
		LUACSGO_KEY_L = 0x4C,
		LUACSGO_KEY_M = 0x4D,
		LUACSGO_KEY_N = 0x4E,
		LUACSGO_KEY_O = 0x4F,
		LUACSGO_KEY_P = 0x50,
		LUACSGO_KEY_Q = 0x51,
		LUACSGO_KEY_R = 0x52,
		LUACSGO_KEY_S = 0x53,
		LUACSGO_KEY_T = 0x54,
		LUACSGO_KEY_U = 0x55,
		LUACSGO_KEY_V = 0x56,
		LUACSGO_KEY_W = 0x57,
		LUACSGO_KEY_X = 0x58,
		LUACSGO_KEY_Y = 0x59,
		LUACSGO_KEY_Z = 0x5A,
		LUACSGO_KEY_LWIN = 0x5B,
		LUACSGO_KEY_RWIN = 0x5C,
		LUACSGO_KEY_APPS = 0x5D,
		LUACSGO_KEY_SLEEP = 0x5F,
		LUACSGO_KEY_NUMPAD0 = 0x60,
		LUACSGO_KEY_NUMPAD1 = 0x61,
		LUACSGO_KEY_NUMPAD2 = 0x62,
		LUACSGO_KEY_NUMPAD3 = 0x63,
		LUACSGO_KEY_NUMPAD4 = 0x64,
		LUACSGO_KEY_NUMPAD5 = 0x65,
		LUACSGO_KEY_NUMPAD6 = 0x66,
		LUACSGO_KEY_NUMPAD7 = 0x67,
		LUACSGO_KEY_NUMPAD8 = 0x68,
		LUACSGO_KEY_NUMPAD9 = 0x69,
		LUACSGO_KEY_MULTIPLY = 0x6A,
		LUACSGO_KEY_ADD = 0x6B,
		LUACSGO_KEY_SEPARATOR = 0x6C,
		LUACSGO_KEY_SUBTRACT = 0x6D,
		LUACSGO_KEY_DECIMAL = 0x6E,
		LUACSGO_KEY_DIVIDE = 0x6F,
		LUACSGO_KEY_F1 = 0x70,
		LUACSGO_KEY_F2 = 0x71,
		LUACSGO_KEY_F3 = 0x72,
		LUACSGO_KEY_F4 = 0x73,
		LUACSGO_KEY_F5 = 0x74,
		LUACSGO_KEY_F6 = 0x75,
		LUACSGO_KEY_F7 = 0x76,
		LUACSGO_KEY_F8 = 0x77,
		LUACSGO_KEY_F9 = 0x78,
		LUACSGO_KEY_F10 = 0x79,
		LUACSGO_KEY_F11 = 0x7A,
		LUACSGO_KEY_F12 = 0x7B,
		LUACSGO_KEY_F13 = 0x7C,
		LUACSGO_KEY_F14 = 0x7D,
		LUACSGO_KEY_F15 = 0x7E,
		LUACSGO_KEY_F16 = 0x7F,
		LUACSGO_KEY_F17 = 0x80,
		LUACSGO_KEY_F18 = 0x81,
		LUACSGO_KEY_F19 = 0x82,
		LUACSGO_KEY_F20 = 0x83,
		LUACSGO_KEY_F21 = 0x84,
		LUACSGO_KEY_F22 = 0x85,
		LUACSGO_KEY_F23 = 0x86,
		LUACSGO_KEY_F24 = 0x87,
		LUACSGO_KEY_LSHIFT = 0xA0,
		LUACSGO_KEY_RSHIFT = 0xA1,
		LUACSGO_KEY_LCONTROL = 0xA2,
		LUACSGO_KEY_RCONTROL = 0xA3,
		LUACSGO_KEY_LMENU = 0xA4,
		LUACSGO_KEY_RMENU = 0xA5,
		LUACSGO_KEY_OEM_1 = 0xBA,		//';:'forUS
		LUACSGO_KEY_OEM_PLUS = 0xBB,	//'+'anycountry
		LUACSGO_KEY_OEM_COMMA = 0xBC,	//','anycountry
		LUACSGO_KEY_OEM_MINUS = 0xBD,	//'-'anycountry
		LUACSGO_KEY_OEM_PERIOD = 0xBE,	//'.'anycountry
		LUACSGO_KEY_OEM_2 = 0xBF,		//'/?'forUS
		LUACSGO_KEY_OEM_3 = 0xC0,		//'`~'forUS
		LUACSGO_KEY_OEM_4 = 0xDB,		//'[{'forUS
		LUACSGO_KEY_OEM_5 = 0xDC,		//'\|'forUS
		LUACSGO_KEY_OEM_6 = 0xDD,		//']}'forUS
		LUACSGO_KEY_OEM_7 = 0xDE,		//''"'forUS
		LUACSGO_KEY_OEM_8 = 0xDF
	};

}