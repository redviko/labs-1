#include <iostream>
using namespace std;

// 3-5-2

int main() {
    unsigned short number;
    cin >> number;
    switch(number)
    {
        case 1:
            cout << "Shurup" << endl;
            break;
        case 2:
            cout << "Gaika" << endl;
            break;
        case 3:
            cout << "Vint" << endl;
            break;
        case 4:
            cout << "Gvozd" << endl;
            break;
        case 5:
            cout << "Bolt" << endl;
            break;
        default:
            cout << "Unknown" << endl;
            break;
    }
    return 0;
}