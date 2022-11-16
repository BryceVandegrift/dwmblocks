//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" XMR=$", "sb-crypto",				3600,		5},

	{"❭ ", "uname -sr",				0,		4},

	{"🔊 ","sb-vol",				10,		3},

	{"🌎 ","sb-net",				30,		2},

	{"🕗 ","sb-time",				1,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
