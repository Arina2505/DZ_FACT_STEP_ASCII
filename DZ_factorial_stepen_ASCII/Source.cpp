#include <iostream>
#include <conio.h>

using namespace std;

//#define FACTORIAL
#define STEPEN
//#define ASCII

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FACTORIAL
	cout << "\t\t\t\t ФАКТОРИАЛ" << endl;
	cout << endl;
	int n, a;
	cout << "Введите факториал:"; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		a = a * i;
	}
	cout << a << endl;

#endif 

#ifdef STEPEN
	cout << "\t\t\t\t СТЕПЕНЬ" << endl;
	cout << endl;
	int a, n;	//Основание и показатель степени
	int N = 1;	//Степень
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		N = N * a;
	}
	cout << "Степень числа:" << n << endl;
#endif // STEPEN

#ifdef ASCII
	cout << "\t\t\t\t ASCII" << endl;
	cout << endl;
	char key;

	for (int i = 1; i <= 16; i++)
	{
		do
		{
			key = _getch();
			cout << (int)key << "\t" << key << endl;
		} while (true);
	}
	cout << endl;
#endif // ASCII

}