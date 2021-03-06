#pragma once
#include <vector>
#include <QtCore/QString>

enum ModKeys
{
    NO_MOD    = 0,
    CTRL_MOD  = 1,
    SHIFT_MOD = 2,
    ALT_MOD   = 3,
};

enum KeyName : int32_t
{
    COH_INPUT_INVALID          = 0,
    COH_INPUT_ESCAPE           = 1,
    COH_INPUT_1                = 2,
    COH_INPUT_2                = 3,
    COH_INPUT_3                = 4,
    COH_INPUT_4                = 5,
    COH_INPUT_5                = 6,
    COH_INPUT_6                = 7,
    COH_INPUT_7                = 8,
    COH_INPUT_8                = 9,
    COH_INPUT_9                = 10,
    COH_INPUT_0                = 11,
    COH_INPUT_MINUS            = 12,
    COH_INPUT_EQUALS           = 13,
    COH_INPUT_BACKSPACE        = 14,
    COH_INPUT_TAB              = 15,
    COH_INPUT_Q                = 16,
    COH_INPUT_W                = 17,
    COH_INPUT_E                = 18,
    COH_INPUT_R                = 19,
    COH_INPUT_T                = 20,
    COH_INPUT_Y                = 21,
    COH_INPUT_U                = 22,
    COH_INPUT_I                = 23,
    COH_INPUT_O                = 24,
    COH_INPUT_P                = 25,
    COH_INPUT_LBRACKET         = 26,
    COH_INPUT_RBRACKET         = 27,
    COH_INPUT_RETURN           = 28,
    COH_INPUT_LCONTROL         = 29,
    COH_INPUT_A                = 30,
    COH_INPUT_S                = 31,
    COH_INPUT_D                = 32,
    COH_INPUT_F                = 33,
    COH_INPUT_G                = 34,
    COH_INPUT_H                = 35,
    COH_INPUT_J                = 36,
    COH_INPUT_K                = 37,
    COH_INPUT_L                = 38,
    COH_INPUT_SEMICOLON        = 39,
    COH_INPUT_APOSTROPHE       = 40,
    COH_INPUT_TILDE            = 41,
    COH_INPUT_LSHIFT           = 42,
    COH_INPUT_BACKSLASH        = 43,
    COH_INPUT_Z                = 44,
    COH_INPUT_X                = 45,
    COH_INPUT_C                = 46,
    COH_INPUT_V                = 47,
    COH_INPUT_B                = 48,
    COH_INPUT_N                = 49,
    COH_INPUT_M                = 50,
    COH_INPUT_COMMA            = 51,
    COH_INPUT_PERIOD           = 52,
    COH_INPUT_SLASH            = 53,
    COH_INPUT_RSHIFT           = 54,
    COH_INPUT_MULTIPLY         = 55,
    COH_INPUT_SPACE            = 57,
    COH_INPUT_F1               = 59,
    COH_INPUT_F2               = 60,
    COH_INPUT_F3               = 61,
    COH_INPUT_F4               = 62,
    COH_INPUT_F5               = 63,
    COH_INPUT_F6               = 64,
    COH_INPUT_F7               = 65,
    COH_INPUT_F8               = 66,
    COH_INPUT_F9               = 67,
    COH_INPUT_F10              = 68,
    COH_INPUT_NUMLOCK          = 69,
    COH_INPUT_SCROLL           = 70,
    COH_INPUT_NUMPAD7          = 71,
    COH_INPUT_NUMPAD8          = 72,
    COH_INPUT_NUMPAD9          = 73,
    COH_INPUT_NUMPAD4          = 75,
    COH_INPUT_NUMPAD5          = 76,
    COH_INPUT_NUMPAD6          = 77,
    COH_INPUT_NUMPAD1          = 79,
    COH_INPUT_NUMPAD2          = 80,
    COH_INPUT_NUMPAD3          = 81,
    COH_INPUT_NUMPAD0          = 82,
    COH_INPUT_F11              = 87,
    COH_INPUT_F12              = 88,
    COH_INPUT_F13              = 100,
    COH_INPUT_F14              = 101,
    COH_INPUT_F15              = 102,
    COH_INPUT_NUMPADEQUALS     = 141,
    COH_INPUT_ABNT_C1          = 115,
    COH_INPUT_ABNT_C2          = 126,
    COH_INPUT_COLON            = 146,
    COH_INPUT_UNDERLINE        = 147,
    COH_INPUT_NEXTTRACK        = 153,
    COH_INPUT_NUMPADENTER      = 156,
    COH_INPUT_RCONTROL         = 157,
    COH_INPUT_MUTE             = 160,
    COH_INPUT_CALCULATOR       = 161,
    COH_INPUT_PLAYPAUSE        = 162,
    COH_INPUT_MEDIASTOP        = 164,
    COH_INPUT_VOLUMEDOWN       = 174,
    COH_INPUT_VOLUMEUP         = 176,
    COH_INPUT_WEBHOME          = 178,
    COH_INPUT_NUMPADCOMMA      = 179,
    COH_INPUT_SYSRQ            = 183,
    COH_INPUT_PAUSE            = 197,
    COH_INPUT_HOME             = 199,
    COH_INPUT_END              = 207,
    COH_INPUT_INSERT           = 210,
    COH_INPUT_DELETE           = 211,
    COH_INPUT_WEBSEARCH        = 229,
    COH_INPUT_WEBFAVORITES     = 230,
    COH_INPUT_WEBREFRESH       = 231,
    COH_INPUT_WEBSTOP          = 232,
    COH_INPUT_WEBFORWARD       = 233,
    COH_INPUT_WEBBACK          = 234,
    COH_INPUT_MYCOMPUTER       = 235,
    COH_INPUT_MAIL             = 236,
    COH_INPUT_MEDIASELECT      = 237,
    COH_INPUT_NUMPADSTAR       = 55,
    COH_INPUT_LALT             = 56,
    COH_INPUT_CAPSLOCK         = 58,
    COH_INPUT_NUMPADMINUS      = 74,
    COH_INPUT_NUMPADPLUS       = 78,
    COH_INPUT_NUMPADPERIOD     = 83,
    COH_INPUT_NUMPADSLASH      = 181,
    COH_INPUT_RALT             = 184,
    COH_INPUT_UPARROW          = 200,
    COH_INPUT_PGUP             = 201,
    COH_INPUT_LEFTARROW        = 203,
    COH_INPUT_RIGHTARROW       = 205,
    COH_INPUT_DOWNARROW        = 208,
    COH_INPUT_PGDN             = 209,
    COH_INPUT_LBUTTON          = 238,
    COH_INPUT_MBUTTON          = 239,
    COH_INPUT_RBUTTON          = 240,
    COH_INPUT_BUTTON4          = 241,
    COH_INPUT_BUTTON5          = 242,
    COH_INPUT_BUTTON6          = 243,
    COH_INPUT_BUTTON7          = 244,
    COH_INPUT_BUTTON8          = 245,
    COH_INPUT_MOUSE_SCROLL     = 246,
    COH_INPUT_JOY1             = 90,
    COH_INPUT_JOY2             = 91,
    COH_INPUT_JOY3             = 92,
    COH_INPUT_JOY4             = 93,
    COH_INPUT_JOY5             = 94,
    COH_INPUT_JOY6             = 95,
    COH_INPUT_JOY7             = 96,
    COH_INPUT_JOY8             = 97,
    COH_INPUT_JOY9             = 98,
    COH_INPUT_JOY10            = 99,
    COH_INPUT_JOY11            = 127,
    COH_INPUT_JOY12            = 128,
    COH_INPUT_JOY13            = 129,
    COH_INPUT_JOY14            = 130,
    COH_INPUT_JOY15            = 131,
    COH_INPUT_JOY16            = 132,
    COH_INPUT_JOY17            = 133,
    COH_INPUT_JOY18            = 134,
    COH_INPUT_JOY19            = 135,
    COH_INPUT_JOY20            = 136,
    COH_INPUT_JOY21            = 137,
    COH_INPUT_JOY22            = 138,
    COH_INPUT_JOY23            = 139,
    COH_INPUT_JOY24            = 140,
    COH_INPUT_JOY25            = 89,
    COH_INPUT_JOYPAD_UP        = 185,
    COH_INPUT_JOYPAD_DOWN      = 186,
    COH_INPUT_JOYPAD_LEFT      = 187,
    COH_INPUT_JOYPAD_RIGHT     = 188,
    COH_INPUT_POV1_UP          = 103,
    COH_INPUT_POV1_DOWN        = 104,
    COH_INPUT_POV1_LEFT        = 105,
    COH_INPUT_POV1_RIGHT       = 113,
    COH_INPUT_POV2_UP          = 114,
    COH_INPUT_POV2_DOWN        = 116,
    COH_INPUT_POV2_LEFT        = 117,
    COH_INPUT_POV2_RIGHT       = 118,
    COH_INPUT_POV3_UP          = 119,
    COH_INPUT_POV3_DOWN        = 122,
    COH_INPUT_POV3_LEFT        = 124,
    COH_INPUT_POV3_RIGHT       = 142,
    COH_INPUT_JOYSTICK1_UP     = 189,
    COH_INPUT_JOYSTICK1_DOWN   = 190,
    COH_INPUT_JOYSTICK1_LEFT   = 191,
    COH_INPUT_JOYSTICK1_RIGHT  = 192,
    COH_INPUT_JOYSTICK2_UP     = 165,
    COH_INPUT_JOYSTICK2_DOWN   = 166,
    COH_INPUT_JOYSTICK2_LEFT   = 167,
    COH_INPUT_JOYSTICK2_RIGHT  = 168,
    COH_INPUT_JOYSTICK3_UP     = 143,
    COH_INPUT_JOYSTICK3_DOWN   = 152,
    COH_INPUT_JOYSTICK3_LEFT   = 154,
    COH_INPUT_JOYSTICK3_RIGHT  = 155,
    COH_INPUT_LAST_NON_GENERIC = 256,
    COH_KEY_GENERIC_CONTROL    = 0x801, // either of control keys
    COH_KEY_GENERIC_SHIFT      = 0x802, // either of shift keys
    COH_KEY_GENERIC_ALT        = 0x803, // either of alt keys
    COH_MOUSE_MOVE             = 0x1000,
};
struct Keybind
{
    KeyName actualKey;
    QString Key;
    QString Command;
};

struct KeyProfiles_Entry
{
    QString DisplayName;
    QString Name;
    std::vector<Keybind> KeybindArr;
};

struct CommandEntry {
    KeyName keyname;
    ModKeys key_mods; // Mod  0, 1 - CONTROL_KEY_PRESSED, 2 - SHIFT PRESSED, 3 - ALT PRESSED
};
struct Command
{
    QString CmdString;
    QString DisplayName;
    CommandEntry bound_to[2];
};
struct CommandCategory_Entry
{
    QString DisplayName;
    std::vector<Command> commands;
};

using Parse_AllKeyProfiles = std::vector<KeyProfiles_Entry>;
using Parse_AllCommandCategories = std::vector<CommandCategory_Entry>;
