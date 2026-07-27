#pragma once
#include <iostream>
#include <cmath>
using namespace std;

bool isRussianLetter(unsigned char c) {
    return (c >= 192 && c <= 255) || c == 168 || c == 184;
}

void rusCodeDifference(unsigned char let1, unsigned char let2) {
    cout << "Символ 1: '" << let1 << "' (код: " << (int)let1 << ")" << endl;
    cout << "Символ 2: '" << let2 << "' (код: " << (int)let2 << ")" << endl;
    // Вычисление разницы между кодами русских символов
    int difference = abs((int)let1 - (int)let2);
    cout << "Разница между кодами: " << difference << endl;

   bool isLet1Russian = isRussianLetter(let1);
    bool isLet2Russian = isRussianLetter(let2);

    if (isLet1Russian && isLet2Russian) {
        cout << "Оба символа являются русскими буквами." << endl;
    }
    else {
        cout << "Внимание: один или оба символа не являются русскими буквами!" << endl;
    }
}