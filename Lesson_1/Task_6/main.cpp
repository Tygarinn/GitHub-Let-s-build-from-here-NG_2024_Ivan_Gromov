#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    short sleep = 300;
    short triangleSize = 0;
    cout << "Please, enter your triangle size:";
    cin >> triangleSize;

    char space = ' ';
    char triangleSymbol = '*';

    while(true)
    {
        for (int counter = 0; counter <= triangleSize; counter++)
        {
            cout << string(counter, triangleSymbol);
            cout << string(triangleSize - counter, space);
            cout << "\n";

        }
        Sleep(sleep);
        system("cls");
        for (int counter = triangleSize; counter >= 0; counter--)
        {
            cout << string(counter, triangleSymbol);
            cout << string(triangleSize - counter, space);
            cout << "\n";
        }
        Sleep(sleep);
        system("cls");
        for (int counter = 0; counter <= triangleSize; counter++)
        {
            cout << string(counter, space);
            cout << string(triangleSize - counter, triangleSymbol);
            cout << "\n";
        }
        Sleep(sleep);
        system("cls");
        for (int counter = triangleSize; counter >= 0; counter--)
        {
            cout << string(counter, space);
            cout << string(triangleSize - counter, triangleSymbol);
            cout << "\n";
        }
        Sleep(sleep);
        system("cls");
    }
}
