#include <iostream>
#include <string>

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
    const float G = 9.8;
    double x0, v0;
    int t;
    x0 = input<double>("Input x0: ");
    v0 = input<double>("Input v0: ");
    t = input<int>("Input t: ");

    cout << "Distance = " << x0 + v0 * t + G * t * t / 2 << endl;
}
