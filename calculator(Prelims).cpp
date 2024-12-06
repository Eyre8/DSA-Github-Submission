#include <iostream>

using namespace std;

int main()
{
    int op;
    float num1, num2;

    cout << "Enter operator to use: \n";
    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> op;
    cout << "Enter first number: \n";
    cin >> num1;
    cout << "Enter second number: \n";
    cin >> num2;

    switch (op)
    {
        case 1:
        cout << "The sum is: ";
        cout << num1+num2;
        break;

        case 2:
        cout << "The difference is: ";
        cout << num1-num2;
        break;

        case 3:
        cout << "The product is: ";
        cout << num1*num2;
        break;

        case 4:
        cout << "The qoutient is: ";
        cout << num1/num2;
        break;

        default:
        cout << "Not a valid option";
    }
}