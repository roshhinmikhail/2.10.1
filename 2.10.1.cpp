// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int a, b;
	cout << "������� 1 �����\n";
	cin >> a;
	cout << "������� 2 �����\n";
	cin >> b;
	cout << "����� = " << a+b;
	cout << "\n�������� = " << a - b;
	cout << "\n������������ = " << a * b;
	cout << "\n������� = " << a / b << "\n";
	system("PAUSE");
	return 0;
}

