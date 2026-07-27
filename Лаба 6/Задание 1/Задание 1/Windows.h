#include <string>
#include <iostream>

int numberCode(std::string let1) {
    for (int i = 0; i < let1.length(); i++) {
        char code = let1[i];
        if (static_cast<int>(code) >= 48 && static_cast<int>(code) <= 57) {
            std::cout << " Код цифры " << code << " - " << static_cast<int>(code) << std::endl;
        }
        else {
            std::cout << "некорректные символы!" << std::endl;
        }
    }
    return 0;