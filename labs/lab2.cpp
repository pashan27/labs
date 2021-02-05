//3. Напишіть програму для розрахунку значення сили, 
//яку приклали до тіла, якщо відома маса тіла та величина прискорення.
#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float m,a;
	cout << "маса: ";
	cin >> m;
	cout << "прискорення: ";
	cin >> a;
	cout << "Сила: " << m*a<<" Н"<< endl;
	return 0;
}
