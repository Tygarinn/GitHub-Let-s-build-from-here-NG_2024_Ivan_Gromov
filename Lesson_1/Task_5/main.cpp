#include <iostream>
using namespace std;

int main() {
    int height = 0;

    cout << "Enter Christmas tree height: ";
    cin >> height;

    for (int row = 1; row <= height; ++row){

        for (int spaces = 0; spaces < height - row; ++spaces) {
            cout << " ";
        }

        for (int stars = 0; stars < (2 * row - 1); ++stars) {
            cout << "*";
        }
        cout << endl;
    }


    for (int row = 0; row < height - 1; ++row) {
        cout << " ";
    }
    cout << "*" << endl;

    return 0;
}
