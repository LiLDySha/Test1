#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int Number1 = 0;
    int Number2 = 0;
    float Sum = 0;
    char Operation;

    std::cout << "Введите перове число --> ";
    std::cin >> Number1;
    std::cout << "\nВведите второе число --> ";
    std::cin >> Number2;
    std::cout << "\nВведите операцию ( + , - , * , / , % ) --> ";
    std::cin >> Operation;

    if (Operation == '+')
    {
        Sum = Number1 + Number2;
    }
    if (Operation == '-')
    {
        Sum = Number1 - Number2;
    }
    if (Operation == '*')
    {
        Sum = Number1 * Number2;
    }
    if (Operation == '/')
    {
        if (Number2 == 0)
        {
            std::cout << "\nНизя на 0 делить";
            return 0;
        }
        Sum = Number1 / Number2;
    }
    if (Operation == '%')
    {
        Sum = (Number1 * 0.01) * Number2;
    }

    std::cout << "\n" << Number1 << " " << Operation << " " << Number2 << " = " << Sum;

	return 0;
}