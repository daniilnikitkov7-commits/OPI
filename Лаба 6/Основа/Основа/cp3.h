#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

void numberCode(unsigned char let1) {
   cout << "Символ: '" << let1 << "'" << endl;
    cout << "Код ASCII: " << (int)let1 << endl;
    // Проверка на цифру
    if (let1 >= '0' && let1 <= '9') {
        int numericValue = let1 - '0';
        cout << "Это цифра. Числовое значение: " << numericValue << endl;

       cout << "В двоичной системе: ";
        for (int i = 3; i >= 0; i--) {
            cout << ((numericValue >> i) & 1);
        }
        cout << endl;
    }
    else {
        cout << "Это не цифра!" << endl;
    }
}