#include <iostream>

using namespace std;

void swapping(int *a, int *b) 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a, b;
    cout << "Input 2 numbers:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << endl;

    swapping(&a, &b);
    cout << "a = " << a << " "
        << "b = " << b << endl;

}