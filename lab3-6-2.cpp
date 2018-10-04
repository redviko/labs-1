// lab3-6-2.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

void print_format(unsigned int x)
{
	switch (x % 10)
	{
	case 1:
		cout << "god";
		break;
	case 2:
		cout << "goda";
		break;
	case 3:
		cout << "goda";
		break;
	case 4:
		cout << "goda";
		break;
	case 5:
		cout << "let";
		break;
	case 6:
		cout << "let";
		break;
	case 7:
		cout << "let";
		break;
	case 8:
		cout << "let";
		break;
	case 9:
		cout << "let";
		break;
	case 0:
		cout << "leta";
		break;
	}
}

int main()
{
	unsigned int x;
	cin >> x;
	if (x > 10 && x < 20)
	{
		cout << "Mne " << x << " let" << endl;
	}
	else
	{
		cout << "Mne " << x << " ";
		print_format(x);
		cout << endl;
	}
	char c;
	cin >> c;
    return 0;
}

