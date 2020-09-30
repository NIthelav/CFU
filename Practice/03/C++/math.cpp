#include <iostream>

using namespace std;

template <typename T, typename U>
void Test_operators (T a, U b)
{
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a * b = " << a * b << endl;
}

int main()
{
    int i1, i2;
    double d1, d2;
    cout << "Input 4 numbers" << endl;
    cin >> i1 >> i2 >> d1 >> d2;
    cout << endl;
    
    cout << "int & int "<< endl;
    Test_operators(i1, i2);
    cout << endl;

    cout << "double & double "<< endl;
    Test_operators(d1, d2);
    cout << endl;

    cout << "double + int "<< endl;
    Test_operators(d1, i2);
    cout << endl;

    cout << "int + double "<< endl;
    Test_operators(i1, d2);
    cout << endl;
}