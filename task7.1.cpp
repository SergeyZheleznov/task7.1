#include <iostream>
#include <windows.h>
#define MODE '2'

int add(int x, int y)
{
    return x + y;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

#ifdef MODE
    std::cout << "MODE определена" << std::endl;
#if (MODE == '0')
    {
        std::cout << "Работаю в режиме тренировки" << std::endl;
    }
#elif MODE == '1'
    {
        std::cout << "Работаю в боевом режиме" << std::endl;

        int num1;
        int num2;
        std::cout << "Ввведите первое число: ";
        std::cin >> num1;
        std::cout << "Ввведите второе число: ";
        std::cin >> num2;

        std::cout << "Результат сложения: " << add(num1, num2) << std::endl;
    }
#else
    {
        std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    }

#endif

#else 
    std::cout << "MODE не определена, необходимо определить символьную константу MODE" << std::endl;

#endif
}

