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
        for (int i = 0; i <= triangleSize; i++)
        {
            cout << string(i, triangleSymbol);
            cout << string(triangleSize - i, space);
            cout << "\n";

        }
        Sleep(sleep);
        system("cls");
        for (int i = triangleSize; i >= 0; i--)
        {
            cout << string(i, triangleSymbol);
            cout << string(triangleSize - i, space);
            cout << "\n";
        }
        Sleep(sleep);
        system("cls");
        for (int i = 0; i <= triangleSize; i++)
        {
            cout << string(i, space);
            cout << string(triangleSize - i, triangleSymbol);
            cout << "\n";
        }
        Sleep(sleep);
        system("cls");
        for (int i = triangleSize; i >= 0; i--)
        {
            cout << string(i, space);
            cout << string(triangleSize - i, triangleSymbol);
            cout << "\n";
        }
        Sleep(sleep);
        system("cls");
    }
}
