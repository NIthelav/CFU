#include <iostream>
#include <math.h>

using namespace std;

float square(float a, float b, float c);
float input_len();
float input_coor();

int main()
{
    int a;
    cout << "Input case: ";
    cin >> a;
    cout << endl;

    switch (a)
    {
    case 0:
        cout << "S = " << input_len();
        break;
    
    case 1:
        cout << "S = " << input_coor();
        break;
    }
}

float input_len()
{
    float a, b, c;
    cout << "Input 3 length" << endl;
    cin >> a
        >> b
        >> c;
    return square(a, b, c);
}

float input_coor()
{
    float a1, a2,
        b1, b2,
        c1, c2;
    cout << "Input 3 coordinates" << endl;
    cin >> a1 >> a2
        >> b1 >> b2
        >> c1 >> c2;
    
    float a = sqrt(pow((a1 - b1), 2)
            + pow((a2 - b2), 2));
    float b = sqrt(pow((b1 - c1), 2)
            + pow((b2 - c2), 2));
    float c = sqrt(pow((c1 - a1), 2)
            + pow((c2 - a2), 2));
    
    return square(a, b, c);
}

float square(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}