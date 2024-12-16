#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int counts[256] = {0};


    cout << "Enter line: ";
    getline(cin, input);


    for (char c : input) {
        counts[(unsigned char)c]++;
    }


    cout << "Quantity of each symbol:" << endl;
    for (int i = 0; i < 256; ++i) {
        if (counts[i] > 0) {
            cout << "'" << (char)i << "': " << counts[i] << endl;
        }
    }
}
