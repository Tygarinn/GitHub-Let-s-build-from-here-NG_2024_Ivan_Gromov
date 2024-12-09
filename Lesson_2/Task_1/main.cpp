#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int arr[5];
    cout << "Please, enter 5 numbers:" << endl;

    for (int counter = 0; counter < 5; ++counter) {
        cin >> arr[counter];
    }

    for (int counter = 0; counter< 5; ++counter) {
        cout << arr[counter];
        if (counter < 4) {
            cout << ",";
        }
    }
}
