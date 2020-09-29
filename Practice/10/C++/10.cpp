#include <iostream>

using namespace std;


int main()
{
    int s, l1, r1, l2, r2;

    cin >> s >> l1 >> r1 >> l2 >> r2;
    cout << (5, 4) << endl;
    if (l1 + r2 >= s)
    {
        r2 = max(s-l1, l2);
    } 
    else
    {
        l1 = min(s-r2, r1);
    }

    (l1 + r2 == s ? (cout << l1 << " " << r2 << endl) : (cout << -1 << endl));
    
}