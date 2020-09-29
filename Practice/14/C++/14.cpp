#include <iostream>

using namespace std;

int main()
{
    int pow;
    cin >> pow;

    int counter = 0;
    int base = 1;
    while (base <= pow)
    {
        base *= 2;
        counter += 1;
    }
        
    cout << counter - 1;
}