// This is a simple calculator made using C++
// I used Visual Studio Code to write this program
// The source code of this program is formatted by 'Prettier' code formator.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout << "Enter the First number: ";
    cin >> num1;
    cout << "Enter the Operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the Second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Cannot divide by Zero" << endl;
            break;

        default:
            cout << "Invalid Operator" << endl;
            break;
    }

    return 0;
}
