//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "sb-wttr",				3600,		7},

	{" XMR=$", "sb-crypto",				3600,		6},

	{"🐧 ", "uname -sr",				0,		5},

	//{"🔋 ", "sb-bat 0",				30,		4},

	{"🔊 ", "sb-vol",				10,		3},

	{"🌎 ", "sb-net",				30,		2},

	{"🕗 ", "sb-time",				1,		1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
