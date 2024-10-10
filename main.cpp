#include <iostream>



using namespace std;



int main() {

    double num1, num2, result;

    char operation;



    cout << "Enter first number: ";

    cin >> num1;



    cout << "Enter operator (+, -, *, /,^): ";

    cin >> operation;



    cout << "Enter second number: ";

    cin >> num2;



    switch (operation) {

    case '+':

        result = num1 + num2;

        break;

    case '-':

        result = num1 - num2;

        break;

    case '*':

        result = num1 * num2;

        break;

    case '/':

        if (num2 == 0) {

            cout << "Error: Division by zero!" << endl;

            return 1;
    case '^':

        result = num1 ^ num2;

        break;

        }

        result = num1 / num2;

        break;

    default:

        cout << "Invalid operator!" << endl;

        return 1;

    }



    cout << "Result: " << result << endl;

    return 0;

}