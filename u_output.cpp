#include "u_output.h"
#include "u_config.h"
#include <iostream>
#include <cstdlib>


namespace out
{
	void welcome()
	{
		newLine(8);
		std::cout << config::welcome << std::endl;
		newLine(2);
	
		std::cout << std::flush;
	}

	void newLine(int len)
	{
		for (int x = 0; x < len; ++x)
		{
			std::cout << '\n';
		}
	}

	void menu()
	{
		std::cout << "What do you want to do?\n\n";
		std::cout << config::menu;
	}

	void clrScrn() //placed inside out:: as it manipulates output
	{
		std::cout << std::flush;
		system("cls");
	}
}