#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number = 0;
	float sum = 0;
	float rubles = 0;

	while (number != 5)
	{
		std::cout << "\n\n\n\n����� ���������� � ������ ���� ��� ��������� 'Rob banks'\n";
		std::cout << "���� ��������� ���������� 5%\n";
		std::cout << "������� ����� ������ � ������� �� ������ �������������� �����:\n";
		std::cout << "1. �������\n";
		std::cout << "2. �����\n";
		std::cout << "3. �������\n";
		std::cout << "4. �����\n";
		std::cout << "5. ���������\n";
		std::cout << "������� ����� --> ";
		std::cin >> number;

		if (number == 1)
		{
			std::cout << "�� ������ ������ 1 ������� = 93 ������\n";
			std::cout << "������� ���-�� ������:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 93;
			std::cout << "\n" << sum << " ������� �� ��������";
			
		}

		if (number == 2)
		{

			std::cout << "�� ������ ������ 1 ����� = 103,53 ������\n";
			std::cout << "������� ���-�� ������:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 103.53;
			std::cout << "\n" << sum << " ����� �� ��������";

		}

		if (number == 3)
		{

			std::cout << "�� ������ ������ 1 ������� = 37 ������\n";
			std::cout << "������� ���-�� ������:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 37;
			std::cout << "\n" << sum << " ������� �� ��������";

		}

		if (number == 4)
		{

			std::cout << "�� ������ ������ 1 ����� = 0,64 ������\n";
			std::cout << "������� ���-�� ������:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 0.64;
			std::cout << "\n" << sum << " ����� �� ��������";

		}
		
	}

	return 0;
}