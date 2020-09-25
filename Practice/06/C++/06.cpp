#include <iostream>
#include <math.h>

using namespace std;

template <typename Num>

Num input(string msg)
{
    Num var;
    cout << msg;
    cin >> var;
    cout << endl;
    return var;
}

int main()
{
    double a = input<double>("Input a = ");
    double b = input<double>("Input b = ");
    double c = input<double>("Input c = ");

    if (a == 0 && b == 0)
    {
        cout << "x = " << -c << endl;
    } else if (a == 0)
    {
        cout << "x = " << -c/b << endl;
    }
    else {
        double d = b * b - 4 * a * c;
        if (d  < 0)
        {
            cout << "Does not exist in real numbers";
        } else if (d == 0)
        {
            cout << "x = " << -b / (2 * a);
        } else 
        {
            cout << "x1 = " << (-b + sqrt(d)) / (2 * a)
                << " x2 = " << (-b - sqrt(d)) / (2 * a)
                << endl;
        }
    }
    
    
}