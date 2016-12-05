// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int a, b;
	cout << "Введите 1 число\n";
	cin >> a;
	cout << "Введите 2 число\n";
	cin >> b;
	cout << "Сумма = " << a+b;
	cout << "\nРазность = " << a - b;
	cout << "\nПроизведение = " << a * b;
	cout << "\nЧастное = " << a / b << "\n";
	system("PAUSE");
	return 0;
}

