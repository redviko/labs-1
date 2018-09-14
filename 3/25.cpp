#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    double a;
    scanf("%lf", &a);
    cout << pow(a, 2) - sin(a) + cos(a) << endl;
    return 0;
}

