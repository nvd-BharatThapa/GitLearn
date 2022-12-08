// Program to find factorail
// for fun xdxd

#include <iostream>

int fact(int num)
{
	int temp = num;
	for (int i = 1; i < num; i++)
	{
		temp = temp * i;
	}
	return temp;
}

int main()
{
	std::cout << "Enter number: ";
	int num{};
	std::cin >> num;

	std::cout << "Factorial of " << num << " is " << fact(num);
}
