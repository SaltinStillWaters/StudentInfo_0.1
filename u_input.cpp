#include "u_input.h"
#include <iostream>
#include <string>
#include <limits>

namespace in
{
	bool yOrN(std::string text)
	{
		while (true)
		{
			char answer_in = ' ';
			std::cout << text;
			std::cin >> answer_in;

			error::clrBuffer_io();	//to remove possible excess input

			switch (answer_in)
			{
			case 'y':
			case 'Y':
				return 1;
				break;	//break added in case return is removed in future modifications

			case 'n':
			case 'N':
				return 0;
				break;

			default:
				std::cout << "*Enter only 'Y'/'N'*\n\n";
				break;
			}
		}
	}

	
	int integer(int minRange, int maxRange, std::string text)
	{
		//Argument-error handling
		if (minRange == maxRange)
		{
			std::cout << "!minRange and maxRange is the same\n\n";
			return -9999;	//-9999 = error code
		}
		else if (minRange > maxRange)
		{
			std::cout << "!minRange > maxRange\n\n";
			return -9999;
		}

		while (true)
		{
			int int_in = 0;
			std::cout << text;
			std::cin >> int_in;

			//Error handling
			error::clrBuffer_io(); //to remove possible excessive input

			if (!std::cin)
			{
				std::cin.clear();
				error::clrBuffer_io();
				std::cout << "*Invalid Input*\n\n";
				continue;
			}
			else if (int_in < minRange || int_in > maxRange)
			{
				std::cout << "*Choose from " << minRange << '-' << maxRange << "*\n\n";
				continue;
			}
			//--------------

			return int_in; //if no error; return int_in
		}
	}

}

namespace error
{
	void clrBuffer_io()
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}