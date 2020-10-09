#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x, y;
	cout << " Дано уровнение прямой y = 0.5 * x + 1 " << endl;
	cout << " Введите каординату х " ;
	cin >> x;
	cout << " Введите каординату у " ;
	cin >> y;
	if (f(x, y) == 0)
		cout << " Точка лежит на прямой ";
	else if (f(x, y) > 0)
		cout << " Точка лежит над прямой ";
	else
		cout << " Точка лежит под прямой ";
	return 0;
}

float f(float x, float y)
{
	return y - 0.5 * x - 1;
}