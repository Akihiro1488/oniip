#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
	int nu; // nu - счётчик циклов
	float y, x, a, b, h, us;

	do
	{
		cout << "enter the value of the point A:" << endl;
		cin>> a;
		cout << "enter the value of the point B:" << endl;
		cin>> b;
	}
	while (b < a);
	cout << "enter the step value:" << endl;
	cin >> h;
	x = a;
	if (h < (b - a))
	{
		nu = 1;
		us = 0;
		while (x <= b)
		{
			us = cos(x);
			if (us = 0)
			{
				cout << "function is not defined"<< endl;
				x = x + h;
				nu = nu + 1;
			}
			else
				y = ((1 / M_PI) * ( (1 + tan(x)) * (1 + tan(x)) ));
			cout << nu << "x=" << x << endl;
			cout << nu << "y=" << y << endl;
			cout <<"______________________" << endl;
			x = x + h;
			nu = nu + 1;
		}
	}
	return 0;
}
