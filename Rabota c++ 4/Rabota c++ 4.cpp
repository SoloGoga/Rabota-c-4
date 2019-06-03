#include "pch.h"
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите желаемую строку и я посчитаю количество чисел и букв в ней!" << '\n';

	string str = "";
	getline(cin, str);

	int letters = 0, digits = 0;
	for (int i = 0; i != str.size(); ++i)
	{
		if (isdigit(str[i]))
			digits++;
		else if (isalpha(str[i]))
			letters++;
	}

	cout << "Количество букв: " << letters << "\nКоличество чисел: " << digits << '\n';
	system("pause");
	return 0;
}