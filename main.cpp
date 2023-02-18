#include "u_input.h"
#include "u_output.h"
#include "u_config.h"
#include <iostream>


int main()
{
	//Welcome meesage
	out::welcome();
	std::string holder{};
	std::cout << "Enter 'x' to continue...";
	std::cin >> holder;

	out::clrScrn();

	//Menu Selection
	bool isMenu = 1;
	while (isMenu)
	{
		out::menu();

		int in_selection = in::integer(config::minMenu, config::maxMenu, "> ");
		out::clrScrn();

		switch (in_selection)
		{
		case 1:
			std::cout << "//Add Record\n";
			std::cout << "Enter 'x' to continue...";
			std::cin >> holder;

			out::clrScrn();
			break;
		case 2:
			std::cout << "//Search Record\n";
			std::cout << "Enter 'x' to continue...";
			std::cin >> holder;

			out::clrScrn();
			break;
		case 3:
			std::cout << "//Display Record\n";
			std::cout << "Enter 'x' to continue...";
			std::cin >> holder;

			out::clrScrn();
			break;
		case 4:
			std::cout << "//Delete Record\n";
			std::cout << "Enter 'x' to continue...";
			std::cin >> holder;

			out::clrScrn();
			break;
		case 5:
			std::cout << "//Exit\n";
			isMenu = 0;
			break;
		default:
			break;
		}
	}

	return 0;
}