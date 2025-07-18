#pragma once

namespace color {
	// Reset
	const char reset[] = "\033[0m";

	// Style
	const char bold[] = "\033[1m";
	const char dim[] = "\033[2m";
	const char italic[] = "\033[3m";
	const char underline[] = "\033[4m";
	const char blink[] = "\033[5m";
	const char reverse[] = "\033[7m";
	const char hidden[] = "\033[8m";
	const char strikethrough[] = "\033[9m";

	// Regular Foreground Colors
	const char black[] = "\033[30m";
	const char red[] = "\033[31m";
	const char green[] = "\033[32m";
	const char yellow[] = "\033[33m";
	const char blue[] = "\033[34m";
	const char magenta[] = "\033[35m";
	const char cyan[] = "\033[36m";
	const char white[] = "\033[37m";

	// Bright Foreground Colors
	const char bright_black[] = "\033[90m";
	const char bright_red[] = "\033[91m";
	const char bright_green[] = "\033[92m";
	const char bright_yellow[] = "\033[93m";
	const char bright_blue[] = "\033[94m";
	const char bright_magenta[] = "\033[95m";
	const char bright_cyan[] = "\033[96m";
	const char bright_white[] = "\033[97m";

	// Background Colors
	const char bg_black[] = "\033[40m";
	const char bg_red[] = "\033[41m";
	const char bg_green[] = "\033[42m";
	const char bg_yellow[] = "\033[43m";
	const char bg_blue[] = "\033[44m";
	const char bg_magenta[] = "\033[45m";
	const char bg_cyan[] = "\033[46m";
	const char bg_white[] = "\033[47m";

	// Bright Background Colors
	const char bg_bright_black[] = "\033[100m";
	const char bg_bright_red[] = "\033[101m";
	const char bg_bright_green[] = "\033[102m";
	const char bg_bright_yellow[] = "\033[103m";
	const char bg_bright_blue[] = "\033[104m";
	const char bg_bright_magenta[] = "\033[105m";
	const char bg_bright_cyan[] = "\033[106m";
	const char bg_bright_white[] = "\033[107m";
}
