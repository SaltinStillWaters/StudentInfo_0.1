#include "u_output.h"
#include "u_config.h"
#include <iostream>
#include <cstdlib>


namespace out
{
	void welcome()
	{
		std::cout << config::welcome;
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