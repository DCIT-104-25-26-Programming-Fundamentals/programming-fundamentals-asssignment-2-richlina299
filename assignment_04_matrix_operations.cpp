#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function to input a matrix
void inputMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

// Part A - Transpose
void transposeMatrix(int matrix[10][10], int transpose[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Part B - Add two matrices
void addMatrices(int A[10][10], int B[10][10], int sum[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Part C - Multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10], int product[10][10],
                      int rowsA, int colsA, int colsB)
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            product[i][j] = 0;

            for (int k = 0; k < colsA; k++)
            {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[10][10], B[10][10], result[10][10], transpose[10][10];
    int rows, cols;
    int rowsA, colsA, rowsB, colsB;

    // ===============================
    // PART A - Transpose
    // ===============================
    cout << "PART A - Transpose Matrix\n";

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements:\n";
    inputMatrix(A, rows, cols);

    transposeMatrix(A, transpose, rows, cols);

    cout << "\nOriginal Matrix:\n";
    displayMatrix(A, rows, cols);

    cout << "\nTransposed Matrix:\n";
    displayMatrix(transpose, cols, rows);

    // ===============================
    // PART B - Matrix Addition
    // ===============================
    cout << "\nPART B - Matrix Addition\n";

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter first matrix:\n";
    inputMatrix(A, rows, cols);

    cout << "Enter second matrix:\n";
    inputMatrix(B, rows, cols);

    addMatrices(A, B, result, rows, cols);

    cout << "\nSum Matrix:\n";
    displayMatrix(result, rows, cols);

    // ===============================
    // PART C - Matrix Multiplication
    // ===============================
    cout << "\nPART C - Matrix Multiplication\n";

    cout << "Enter rows of Matrix A: ";
    cin >> rowsA;

    cout << "Enter columns of Matrix A: ";
    cin >> colsA;

    cout << "Enter Matrix A:\n";
    inputMatrix(A, rowsA, colsA);

    cout << "Enter rows of Matrix B: ";
    cin >> rowsB;

    cout << "Enter columns of Matrix B: ";
    cin >> colsB;

    if (colsA != rowsB)
    {
        cout << "Error: Matrix multiplication is not possible." << endl;
        return 0;
    }

    cout << "Enter Matrix B:\n";
    inputMatrix(B, rowsB, colsB);

    multiplyMatrices(A, B, result, rowsA, colsA, colsB);

    cout << "\nProduct Matrix:\n";
    displayMatrix(result, rowsA, colsB);

    return 0;
}
