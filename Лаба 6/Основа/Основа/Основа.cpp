#include <iostream>
#include <Windows.h>

#include "cp1.h"
#include "cp2.h"
#include "cp3.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;
    unsigned char xB = ' ', xS = ' ';
    unsigned char yB = ' ', yS = ' ';
    unsigned char z = ' ';

    do {
        cout << "Выберите (1 лат, 2 рус, 3 цифра, 4 выход): ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите первый символ: ";
            cin >> xB;
            cout << "Введите второй символ: ";
            cin >> xS;
            engCodeDifference(xB, xS);
            break;
        case 2:
            cout << "Введите первый символ: ";
            cin >> yB;
            cout << "Введите второй символ: ";
            cin >> yS;
            rusCodeDifference(yB, yS);
            break;
        case 3:
            cout << "Введите символ (цифру): ";
            cin >> z;
            numberCode(z);
            break;
        case 4:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный выбор! Попробуйте снова." << endl;
            break;
        }
        cout << endl;
    } while (choice != 4);

    return 0;
}