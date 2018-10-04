#include <iostream>
using namespace std;

// 3-5-1 #24

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
        cout << (a + 4*x) / (c*x) << endl;
    }
    else
    {
        cout << 1 - x/c << endl;
    }
    return 0;
}
