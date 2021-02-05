//1. Напишіть програму, яка запитує у користувача його ім’я та вітається із ним.
#include <iostream>
#include<string>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string name;
	cout << "Ваше ім'я: ";
	cin >> name;
	cout << "Привіт, " << name << endl;
	return 0;
}
