#ifndef U_CONFIG_H
#define U_CONFIG_H

#include <string>

namespace config
{
	extern const std::string welcome;
	extern const std::string menu;
	extern const int maxMenu;
	extern const int minMenu;

	int findMaxMenu();
	int findMinMenu();
}

#endif // !U_CONFIG_H