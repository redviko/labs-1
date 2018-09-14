#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = -233;
    b -= a;
    a = (b + a);
    b = (a - b);
    cout << a << ' ' << b << endl;
    return 0;
}
