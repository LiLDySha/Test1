#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number = 1;
	int sum1 = 0;

	while (number != 0)
	{

		std::cout << "¬ведите число --> ";
		std::cin >> number;
		sum1 = sum1 + number;

	}
	
	std::cout << "—умма всех чисел равна " << sum1;

	return 0;
}