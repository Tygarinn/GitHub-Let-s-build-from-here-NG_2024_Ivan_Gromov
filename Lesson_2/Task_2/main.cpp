#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5;
    int numbers[SIZE];


    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter " << i + 1 << " value: ";
        cin >> numbers[i];
    }


    int max_value = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }


    for (int row = 0; row < max_value; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            if (numbers[col] > row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}
