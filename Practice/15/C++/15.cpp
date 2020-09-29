#include <iostream>
#include <cstdlib>

using namespace std;

bool _finalMessage(string);
int _getRandomNumber(int, int);

int main()
{
    const int TRY_NUMBER = 5;
    int number = _getRandomNumber(0, 100);
    bool flag = true;
    int i = 0;
    int guess;
    cout << "Try to guess number" << endl;
    while (flag)
    {
        cout << "Your guess: ";
        cin >> guess;
        cout << endl;

        if (guess < number)
        {
            cout << "Number has higher value" << endl;
        }
        else if (guess > number)
        {
            cout << "Numbeer has lesser value" << endl;
        }
        else
        {
            flag = _finalMessage("Congratulations! You win");
            number = _getRandomNumber(0, 100);
            i = -1;
        }

        if (i == TRY_NUMBER - 1)
        {
            flag = _finalMessage("Game over");
            number = _getRandomNumber(0, 100);
            i = -1;
        }
        i++;
    }
}

bool _finalMessage(string msg)
{
    int flag;
    cout << msg << ". Want to play another round (1 - Yes, 0 - No): ";
    cin >> flag;
    cout << endl;
    return bool(flag);
}

int _getRandomNumber(int min = 0, int max = 100)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}