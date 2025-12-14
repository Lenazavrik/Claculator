#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter an expression (example: 5 + 3): ";
    cin >> a >> op >> b;
    cout << "Enter an expression (example: 5 + 3): ";


    switch (op) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: division by zero!" << endl;
            break;
        default:
            cout << "Unknown operation" << endl;
    }

    return 0;
}
