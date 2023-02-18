#ifndef U_INPUT_H
#define U_INPUT_H

#include <string>

namespace in
{
	bool yOrN(const std::string& text);
	int integer(int minRange, int maxRange, const std::string& text);
	void garbageVal(const std::string& text = "Enter 'x' to continue... ");
}

namespace error
{
	void clrBuffer_io();
}

#endif // !U_INPUT_H