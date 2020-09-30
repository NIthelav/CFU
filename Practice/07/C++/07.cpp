#include <iostream>
#include <math.h>

using namespace std;

void square(double a, double b, double c);
void input_len();
void input_coor();

int main()
{
    int a;
    cout << "Input case: ";
    cin >> a;
    cout << endl;

    switch (a)
    {
    case 1:
        input_len();
        break;
    
    case 2:
        input_coor();
        break;
    default:
        cout << "Incorrect input";
        break;
    }
}

void input_len()
{
    double a, b, c;
    cout << "Input 3 length" << endl;
    cin >> a
        >> b
        >> c;
    square(a, b, c);
}

void input_coor()
{
    double a1, a2,
        b1, b2,
        c1, c2;
    cout << "Input 3 coordinates" << endl;
    cin >> a1 >> a2
        >> b1 >> b2
        >> c1 >> c2;
    
    double a = sqrt(pow((a1 - b1), 2)
            + pow((a2 - b2), 2));
    double b = sqrt(pow((b1 - c1), 2)
            + pow((b2 - c2), 2));
    double c = sqrt(pow((c1 - a1), 2)
            + pow((c2 - a2), 2));
    
    square(a, b, c);
}

void square(double a, double b, double c)
{
    if (a + b < c || b + c < a || a + c < b)
    {
        cout << "Triangle does not exist";
    }
    else
    {
    double p = (a + b + c) / 2;
    cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c));
    }
    
}