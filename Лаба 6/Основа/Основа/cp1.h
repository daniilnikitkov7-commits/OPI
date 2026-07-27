#pragma once
#include <iostream>
#include <cmath>
using namespace std;

void engCodeDifference(unsigned char let1, unsigned char let2) {
    cout << "Символ 1: '" << let1 << "' (код: " << (int)let1 << ")" << endl;
    cout << "Символ 2: '" << let2 << "' (код: " << (int)let2 << ")" << endl;

    int difference = abs((int)let1 - (int)let2);
    cout << "Разница между кодами: " << difference << endl;
    // Вычисление разницы между кодами латинских символов
   bool isLet1English = (let1 >= 'A' && let1 <= 'Z') || (let1 >= 'a' && let1 <= 'z');
    bool isLet2English = (let2 >= 'A' && let2 <= 'Z') || (let2 >= 'a' && let2 <= 'z');

    if (isLet1English && isLet2English) {
        cout << "Оба символа являются английскими буквами." << endl;
    }
    else {
        cout << "Внимание: один или оба символа не являются английскими буквами!" << endl;
    }
}