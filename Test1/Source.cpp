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

		std::cout << "������� ����� --> ";
		std::cin >> number;
		sum1 = sum1 + number;

	}
	
	std::cout << "����� ���� ����� ����� " << sum1;

	return 0;
}