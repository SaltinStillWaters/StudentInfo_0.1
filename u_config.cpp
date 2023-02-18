#include "u_config.h"
#include <string>
#include <cctype>
#include <limits>


namespace config
{
	extern const std::string welcome{ R"(
     _____ _             _            _     _____        __                           _   _               _____                      _ _                   
    / ____| |           | |          | |   |_   _|      / _|                         | | (_)             |  __ \                    (_) |                  
   | (___ | |_ _   _  __| | ___ _ __ | |_    | |  _ __ | |_ ___  _ __ _ __ ___   __ _| |_ _  ___  _ __   | |__) |___ _ __   ___  ___ _| |_ ___  _ __ _   _ 
    \___ \| __| | | |/ _` |/ _ \ '_ \| __|   | | | '_ \|  _/ _ \| '__| '_ ` _ \ / _` | __| |/ _ \| '_ \  |  _  // _ \ '_ \ / _ \/ __| | __/ _ \| '__| | | |
    ____) | |_| |_| | (_| |  __/ | | | |_   _| |_| | | | || (_) | |  | | | | | | (_| | |_| | (_) | | | | | | \ \  __/ |_) | (_) \__ \ | || (_) | |  | |_| |
   |_____/ \__|\__,_|\__,_|\___|_| |_|\__| |_____|_| |_|_| \___/|_|  |_| |_| |_|\__,_|\__|_|\___/|_| |_| |_|  \_\___| .__/ \___/|___/_|\__\___/|_|   \__, |
                                                                                                                    | |                               __/ |
                                                                                                                    |_|                              |___/ 
	)"};
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