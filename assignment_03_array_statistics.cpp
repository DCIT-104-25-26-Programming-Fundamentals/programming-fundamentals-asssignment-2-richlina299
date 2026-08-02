#include <iostream>
using namespace std;

// Function to calculate the sum
int getSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Function to calculate the average
double getAverage(int arr[], int size)
{
    return (double)getSum(arr, size) / size;
}

// Function to find the maximum value
int getMaximum(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Function to find the minimum value
int getMinimum(int arr[], int size)
{
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n;

    cout << "How many numbers? ";
    cin >> n;

    // Validate input
    if (n <= 0)
    {
        cout << "Error: Number of elements must be positive." << endl;
        return 0;
    }

    int arr[n];

    // Read the numbers
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display results
    cout << "\nResults:" << endl;
    cout << "Sum:     " << getSum(arr, n) << endl;
    cout << "Average: " << getAverage(arr, n) << endl;
    cout << "Maximum: " << getMaximum(arr, n) << endl;
    cout << "Minimum: " << getMinimum(arr, n) << endl;

    return 0;
}
