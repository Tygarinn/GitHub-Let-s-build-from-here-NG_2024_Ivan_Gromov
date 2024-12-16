#include <iostream>
#include <string> // Для std::string

using namespace std;

int main()
{
    const int size = 20; // max size of array
    int arr[size];
    int count = 0; // counter of entered numbers
    int maxValue = 0;

    cout << "Enter up to 20 numbers. Input stops, if you enter 0:" << endl;


    for (int counter = 0; counter < size; ++counter) {
        cin >> arr[counter];
        if (arr[counter] == 0) {
            cout << "Input stopped, because you entered 0." << endl;
            break;
        }
        count++;
        if (arr[counter] > maxValue) {
            maxValue = arr[counter];
        }
    }


    cout << "Horizontal visualization:" << endl;
    for (int counter = 0; counter < count; ++counter) {
        if (arr[counter] > 0) {
            int spaces = (maxValue - arr[counter]) / 2;
            cout << string(spaces, ' ');
            cout << string(arr[counter], '*') << endl;
        }
    }
}
