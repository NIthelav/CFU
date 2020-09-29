#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Complex";
    }
}