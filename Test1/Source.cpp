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

    std::cout << "������� ������ ����� --> ";
    std::cin >> Number1;
    std::cout << "\n������� ������ ����� --> ";
    std::cin >> Number2;
    std::cout << "\n������� �������� ( + , - , * , / , % ) --> ";
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
            std::cout << "\n���� �� 0 ������";
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