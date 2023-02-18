#ifndef U_INPUT_H
#define U_INPUT_H

#include <string>

namespace in
{
	bool yOrN(std::string text);
	int integer(int minRange, int maxRange, std::string text);

}

namespace error
{
	void clrBuffer_io();
}

#endif // !U_INPUT_H