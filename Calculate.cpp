#include<iostream>
#include<math.h>
#include<cmath>
#include<string>
#define pi 3.14159265

using namespace std;

int main()
{
	double a, b;
	string c;
	bool Y = true;
	int i;

	setlocale(LC_ALL, "Russian"); // включение русского языка
	system("color F0");	//смена цвета консоли вывода

	cout << "\"+\" - сложение\n\"-\" - вычитание\n\"*\" - умножение\n\"/\" - деление\n\"^\" - возведение в степень\n"
		<<"\"#\" - корень n степени\n\"log\" - логарифм а по основанию b ((a log b) = lg(a)/lg(b))\n"
		<<"\"lg\" - натуральный логарифм\n\"sin\" - синус числа(рад)\n"
		<<"\"cos\" - косинус числа(рад)\n\"tan\" - тангенс числа (рад)\n\"c\" - стереть" << endl;
	cin >> a >> c;
	while (Y)
	{	
		if (c == "c")		
			cin >> a;		
		else if (c == "+")
		{
			cin >> b;
			a += b;
			cout << a << " ";
		}
		else if (c == "-")
		{
			cin >> b;
			a -= b;
			cout << a << " ";
		}
		else if (c == "*")
		{
			cin >> b;
			a *= b;
			cout << a << " ";
		}
		else if (c == "/")
		{
			cin >> b;
			a /= b;
			cout << a << " ";
		}
		else if (c == "^")
		{
			cin >> b;
			a = pow(a, b);
			cout << a << " ";
		}
		else if (c == "#")
		{
			cin >> b;
			a = pow(a, 1 / b);
			cout << a << " ";
		}
		else if (c == "log")
		{
			cin >> b;
			a = log(a) / log(b);
			cout << a << " ";
		}
		else if (c == "lg")
		{
			a = log(a);
			cout << a << " ";
		}
		else if (c == "sin")
		{
			a = sin(a * pi / 180);
			cout << a << " ";
		}
		else if (c == "cos")
		{
			a = cos(a * pi / 180);
			cout << a << " ";
		}
		else if (c == "tan")
		{
			a = tan(a * pi / 180);
			cout << a << " ";
		}
		else Y = false;
		cin >> c;
	}
	system("pause");
	return 0;
}
