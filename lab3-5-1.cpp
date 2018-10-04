#include <iostream>
#include <cassert>
using namespace std;

// 3-5-1 #24
template <class T>
T sdiv(T a, T b)
{
    if(b == 0)
    {
        cout << "division by zero" << endl;
        exit(-1);
    }
    return a/b;
}

int main() {
    double a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    if(c < 0 && a != 0)
    {
        cout << -a*x*x + 5 << endl;
    }
    else if(c > 0 && a == 0)
    {
        cout << sdiv((a + 4*x), (c*x)) << endl;
    }
    else
    {
        cout << 1 - sdiv(x, c) << endl;
    }
    return 0;
}
