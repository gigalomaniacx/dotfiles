//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"| ", 		"/home/adrian/.kiwiStatus",				15,		0},

	{"  ",	"cat /sys/class/net/wlan0/operstate",			30,		0},
	
	{" ",	"amixer get Master | awk -F'[][]' 'END{ print $2 }'",	30,		0},

	{" ",	"sensors | awk '/Package/{print substr ($4,2)}'",	30,		0},

	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "date '+%a %d/%m/%Y %H:%M |'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
