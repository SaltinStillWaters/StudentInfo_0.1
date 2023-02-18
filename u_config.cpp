#include "u_config.h"
#include <string>
#include <cctype>
#include <limits>


namespace config
{
	extern const std::string welcome{ "//This is the welcome screen\n\n" };
	extern const std::string menu{ "[1] Add Record \n[2] Search Record \n[3] Display all Records \n[4] Delete Record \n[5] Exit\n" };
	extern const int maxMenu = findMaxMenu();
	extern const int minMenu = findMinMenu();

	int findMaxMenu()
	{
		int max = std::numeric_limits<int>::min();
		for (int x = 0; x <= config::menu.size() - 1; ++x)
		{
			if (std::isdigit(config::menu[x]))
			{
				if (config::menu[x] - '0' > max)
				{
					max = static_cast<int> (config::menu[x] - '0');
				}
			}
		}
		return max;
	}

	int findMinMenu()
	{
		int min = std::numeric_limits<int>::max();
		for (int x = 0; x <= config::menu.size() - 1; ++x)
		{
			if (std::isdigit(config::menu[x]))
			{
				if (config::menu[x] - '0' < min)
				{
					min = static_cast<int> (config::menu[x] - '0');
				}
			}
		}

		return min;
	}
}