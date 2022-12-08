// Implicit type conversion

#include <iostream>

// In this program implicit type conversion is help without making us noticed.
void print(double num)
{
	std::cout << num;
}

int main()
{
	int x{ 9 };
	print(x);
}