#include <iostream>

using namespace std;

int main()
{
    double salary = 0;

    cout << "How much do you make a month?" << endl;
    cin >> salary;

    if (salary < 1000) {
        cout << "Try harder!" << endl;
    }

    if (salary > 1000){
        if (salary < 999999.999)
            cout << "Good job, buddy!" << endl;
    }

    if (salary > 999999.999){
        cout << "BOMBOCLAAAAT! RICH!!! MILLIONAIRE!!!" << endl;
    }
}
