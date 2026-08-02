#include <iostream>
using namespace std;

// Part A - Print multiplication table for a single number
void printSingleTable(int number)
{
    cout << "Multiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << number << "  x  " << i << "  =  " << number * i << endl;
    }
}

// Part B - Print multiplication tables from 1 to N
void printTablesUpToN(int n)
{
    for (int number = 1; number <= n; number++)
    {
        printSingleTable(number);

        if (number < n)
        {
            cout << "---------------------------" << endl;
        }
    }
}

int main()
{
    int number;
    int n;

    // Part A
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Error: Number must be a positive integer." << endl;
        return 0;
    }

    printSingleTable(number);

    // Part B
    cout << "\nEnter a number N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number must be a positive integer." << endl;
        return 0;
    }

    cout << endl;
    printTablesUpToN(n);

    return 0;
}
