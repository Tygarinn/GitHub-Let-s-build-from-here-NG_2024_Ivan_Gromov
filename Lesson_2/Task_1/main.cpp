#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int arr[5];
    cout << "Please, enter 5 numbers" << endl;

    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];

    cout << arr[0] << ",";
    cout << arr[1] << ",";
    cout << arr[2] << ",";
    cout << arr[3] << ",";
    cout << arr[4];

}
