#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int minutes_from_time(string);

int main()
{   
    string time1, time2;
    cout << "time1: ";
    cin >> time1;
    cout << endl;
    cout << "time2: ";
    cin >> time2;
    cout << endl;

    if (abs(minutes_from_time(time1) - minutes_from_time(time2)) > 15 &&
        abs(minutes_from_time(time1) - minutes_from_time(time2)) < 1425)
    {
        cout << "Meeting will not happen" << endl;
    } else {
        cout << "Meeting will happen" << endl;
    }
}

int minutes_from_time(string time)
{
    size_t sz;

    double hours = stoi(time, &sz);
    double minutes = stoi(time.substr(sz + 1));

    return (hours * 60 + minutes);
}

