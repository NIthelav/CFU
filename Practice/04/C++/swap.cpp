#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Input 2 numbers:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "a = " << a << " "
        << "b = " << b << endl;


    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << " "
        << "b = " << b << endl;
}