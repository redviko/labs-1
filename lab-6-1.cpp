// lab-6-1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x;
	cin >> y;
	if (x == 0 && y == 0)
	{
		cout << "nachalo coordinat" << endl;
	}
	else if (x == 0 && y != 0)
	{
		cout << "prinadlezhit osi X" << endl;
	}
	else if (y == 0 && x != 0)
	{
		cout << "prinadlezhit osi y" << endl;
	}
	else if (x > 0 && y > 0)
	{
		cout << "I" << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "II" << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "III" << endl;
	}
	else if (x > 0 && y < 0)
	{
		cout << "IV" << endl;
	}
	unsigned char c;
	cin >> c;
    return 0;
}

