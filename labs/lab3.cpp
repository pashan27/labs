
//1. Напишіть програму, яка отримує на вхід 
//позитивне ціле число - висоту та виводить “піраміду”
//із зірочок(*) заданої висоти.
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "N=";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << endl;
	}
	return 0;
}
