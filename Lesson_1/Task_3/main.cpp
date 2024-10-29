#include <iostream>

using namespace std;

int main()
{
    double number1=0, number2=0, result=0;
    char operation=0;

    cout <<"Enter first number" << endl;
    cin >> number1;

    cout <<"Enter second number" << endl;
    cin >> number2;

    cout << "What operation do you want to perform? (+, -, *, /)"<< endl;
    cin >> operation;

    if (operation == '+'){
        result = number1 + number2;
    }

    else if (operation == '-'){
        result = number1 - number2;
    }

    else if (operation == '*'){
        result = number1 * number2;
    }

    else if (operation == '/'){
        if (number2 !=0){
            result = number1 / number2;
        }
        else cout << "Error! Can't divide by 0" << endl;

    }
    cout<< "Result:" << result << endl;

}
