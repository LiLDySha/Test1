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
		std::cout << "\n\n\n\nДобро пожаловать в онлайн банк под названием 'Rob banks'\n";
		std::cout << "Наша коммиссия состовляет 5%\n";
		std::cout << "Введите номер валюты в которую вы хотите конвертировать рубли:\n";
		std::cout << "1. Доллорс\n";
		std::cout << "2. Еврос\n";
		std::cout << "3. Фаритос\n";
		std::cout << "4. Йенас\n";
		std::cout << "5. Выключатс\n";
		std::cout << "Введите число --> ";
		std::cin >> number;

		if (number == 1)
		{
			std::cout << "На данный момент 1 Долларс = 93 Рублес\n";
			std::cout << "Введите кол-во рублес:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 93;
			std::cout << "\n" << sum << " Доллорс вы получите";
			
		}

		if (number == 2)
		{

			std::cout << "На данный момент 1 Еврос = 103,53 Рублес\n";
			std::cout << "Введите кол-во рублес:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 103.53;
			std::cout << "\n" << sum << " Еврос вы получите";

		}

		if (number == 3)
		{

			std::cout << "На данный момент 1 Фаритос = 37 Рублес\n";
			std::cout << "Введите кол-во рублес:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 37;
			std::cout << "\n" << sum << " Фаритос вы получите";

		}

		if (number == 4)
		{

			std::cout << "На данный момент 1 Йенас = 0,64 Рублес\n";
			std::cout << "Введите кол-во рублес:\n";
			std::cin >> rubles;
			sum = ((rubles / 100) * 95) / 0.64;
			std::cout << "\n" << sum << " Йенас вы получите";

		}
		
	}

	return 0;
}