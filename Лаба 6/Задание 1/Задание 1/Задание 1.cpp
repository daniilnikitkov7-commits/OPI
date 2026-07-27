#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	int choice;
	unsigned char xB = ' ', xS = ' ';
	unsigned char yB = ' ', yS = ' ';
	unsigned char z = ' ';
	cout << "Выберите (1 лат,2 рус ,3 цифра, 4 выход): ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Введите первый символ:";
		cin >> xB;
		cout << "Введите второй символ:";
		cin >> xS;
		if (int(xS) < 127 || int(xB) < 127) {
			cout << "Разница:" << (int)xB - (int)xS;
		}
		else {
			cout << "Не латинский символ!";
		}
		break;
	case 2:
		cout << "Введите первый символ:";
		cin >> yB;
		cout << "Введите второй символ:";
		cin >> yS;

		if (192 <= int(yB) && 192 <= int(yS)) {
			cout << "Разница:" << (int)yB - (int)yS;
		}
		else {
			cout << "Не русский символ!";
		}
		break;
	case 3:
		cout << "Введите число:";
		cin >> z;
		if (48 <= int(z) || int(z) <= 57) {
			cout << "Номер:" << (int)z;
		}
		else {
			cout << "ошибка!";
		}
		break;
	case 4:
		break;
	default:
		cout << "конец!";
		break;
	}
}