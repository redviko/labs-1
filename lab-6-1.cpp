#include <iostream>
using namespace std;

int main() {
	double x,y;
	cin >> x;
	cin >> y;
	if(x == 0 && y == 0)
		cout << "nachalo coordinat" << endl;
	else if(x == 0 && y != 0)
		cout << "na osi Y" << endl;
	else if(x != 0 && y == 0)
		cout << "na osi X" << endl;
	else if(x > 0 && y > 0)
		cout <<"I"<< endl;
	else if(x < 0 && y > 0)
		cout << "II" <<endl;
	else if(x < 0 && y < 0)
		cout << "III" << endl;
	else if(x > 0 && y < 0)
		cout << "IV" << endl;
	return 0;
}
