#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string task;
    cout << "Input task: ";
    cin >> task;
    cout << endl;

    size_t sz;

    double a = stod(task, &sz);
    char opr = task.c_str()[sz];
    double b = stod(task.substr(sz + 1));

    switch (opr)
    {
    case '+':
        cout << task << " = " << a + b;
        break;
    case '-':
        cout << task << " = " << a - b;
        break;
    case '*':
        cout << task << " = " << a * b;
        break;
    case '/':
        cout << task << " = " << a / b;
        break;
    }
}