#include <iostream>

using namespace std;

int main()
{
    float base;
    int pow;
    cin >> base >> pow;

    int i = 0;
    float res = 1;
    while (i < pow)
    {
        res *= base;
        i++;
    }

    cout << res;
}