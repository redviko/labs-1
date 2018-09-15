#include <iostream>
#include <cmath>
#include <cstdint>
#include <cassert>

using namespace std;

unsigned int digit_to_num(char d)
{
    switch(d)
    {
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
        default:
            unsigned int r = d - 48;
            assert(r <= 9 && r >= 0);
            return r;
    }
}

template<typename T>
long long int convert(string str, T &var)
{
    long long int result = 0;
    bool rb = true;
    string base_str = "";
    unsigned int base;
    unsigned int order = str.size() - 1;
    for(auto &c : str)
    {
        if(c == ':')
        {
            rb = false;
            base = atoi(base_str.c_str());
            order--;
            continue;
        }
        if(rb)
        {
            base_str += c;
            order--;
        }
        else
        {
            result += digit_to_num(c)*pow(base, order--);
        }
    }
    var = (T) result;
    return result;
}

int16_t calc(uint8_t A, int8_t B, uint16_t C, int16_t D)
{
    return (A + D)*B + C;
}

int main(int argc, char **argv)
{
    /*if(argc != 5)
    {
        cout << "Usage: calc <a> <b> <c> <d>" << endl;
        exit(-1);
    }*/
    uint8_t A;
    int8_t B;
    uint16_t C;
    int16_t D;
    cout << "(A + D)*B + C = ";
    cout << (convert(argv[1], A) + convert(argv[4], D))*convert(argv[2], B) + convert(argv[3], C)  << endl;
    cout << "# " << calc(A, B, C, D) << endl;
    return 0;
}
