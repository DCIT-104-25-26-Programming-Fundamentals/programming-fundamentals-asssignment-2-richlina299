#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function for addition
double addition(double a, double b)
{
    return a + b;
}

// Function for subtraction
double subtraction(double a, double b)
{
    return a - b;
}

// Function for multiplication
double multiplication(double a, double b)
{
    return a * b;
}

// Function for division
double division(double a, double b)
{
    return a / b;
}

// Function for modulus
int modulus(int a, int b)
{
    return a % b;
}

// Function for exponentiation
double exponentiation(double base, double exponent)
{
    return pow(base, exponent);
}

int main()
{
    int choice;
    double num1, num2;

    do
    {
        cout << "\n============================" << endl;
        cout << "      SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " + " << num2
                     << " = " << addition(num1, num2) << endl;
                break;

            case 2:
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " - " << num2
                     << " = " << subtraction(num1, num2) << endl;
                break;

            case 3:
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " * " << num2
                     << " = " << multiplication(num1, num2) << endl;
                break;

            case 4:
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                if (num2 == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << fixed << setprecision(2);
                    cout << "Result: " << num1 << " / " << num2
                         << " = " << division(num1, num2) << endl;
                }
                break;

            case 5:
            {
                int a, b;

                cout << "Enter first number : ";
                cin >> a;
                cout << "Enter second number: ";
                cin >> b;

                if (b == 0)
                {
                    cout << "Error: Cannot divide by zero." << endl;
                }
                else
                {
                    cout << "Result: " << a << " % " << b
                         << " = " << modulus(a, b) << endl;
                }
                break;
            }

            case 6:
                cout << "Enter first number : ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);
                cout << "Result: " << num1 << " ^ " << num2
                     << " = " << exponentiation(num1, num2) << endl;
                break;

            case 7:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Error: Invalid menu choice." << endl;
        }

    } while (choice != 7);

    return 0;
}
