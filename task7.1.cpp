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
    std::cout << "MODE ����������" << std::endl;
#if (MODE == '0')
    {
        std::cout << "������� � ������ ����������" << std::endl;
    }
#elif MODE == '1'
    {
        std::cout << "������� � ������ ������" << std::endl;

        int num1;
        int num2;
        std::cout << "�������� ������ �����: ";
        std::cin >> num1;
        std::cout << "�������� ������ �����: ";
        std::cin >> num2;

        std::cout << "��������� ��������: " << add(num1, num2) << std::endl;
    }
#else
    {
        std::cout << "����������� �����. ���������� ������" << std::endl;
    }

#endif

#else 
    std::cout << "MODE �� ����������, ���������� ���������� ���������� ��������� MODE" << std::endl;

#endif
}

