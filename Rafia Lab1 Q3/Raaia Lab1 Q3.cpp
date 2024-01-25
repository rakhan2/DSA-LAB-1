// Raaia Lab1 Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int s = 10; // Maximum size 

// Function prototypes
void inputM(int A[][s], int m, int n);
void displayM(const int A[][s], int m, int n);
int Sum(const int A[][s], int m, int n);
void R_W(const int A[][s], int m, int n);
void C_W(const int A[][s], int m, int n);
void T(const int A[][s], int m, int n);

int main()
{
    int a, b; // variable
    int matrix[s][s];


    while (true)   // Menu
    {
        cout << "\n ENTER YOUR CHOICE \n"
            "1. Input elements into matrix \n"
            "2. Display elements of matrix \n"
            "3. Sum of all elements of matrix \n"
            "4. Display row-wise sum of matrix\n"
            "5. Display column-wise sum of matrix \n"
            "6. Create transpose of matrix \n"

            "Enter your choice ";
        int X;
        cin >> X;


        if (X == 1)
        {
            cout << "Enter the number of rows and columns ";
            cin >> a >> b;
            inputM(matrix, a, b);
        }

        else if (X == 2)
        {
            cout << "Matrix elements \n";
            displayM(matrix, a, b);
        }
        else if (X == 3)
        {
            cout << "Sum of all elements of the matrix " << Sum(matrix, a, b) << std::endl;
        }
        else if (X == 4)
        {
            R_W(matrix, a, b);
        }
        else if (X == 5)
        {
            C_W(matrix, a, b);
        }
        else if (X == 6)
        {
            T(matrix, a, b);
        }

        else
        {
            cout << "Invalid choice \n";
        }

        return 0;
    }
}

void inputM(int A[][s], int m, int n) 
{
    cout << "Enter elements \n";
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j)
        {
            cout << "Enter element at position " << i << ", " << j ;
           cin >> A[i][j];
        }
    }
}



int Sum(const int A[][s], int m, int n) 
{
    int sum = 0;
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            
            sum = sum +  A[i][j];
        }
    }
    return sum;
}


void T(const int A[][s], int m, int n)
{
    cout << "Transpose is " << n << " x " << m << "\n";
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}


void R_W(const int A[][s], int m, int n) 
{

   cout << " sum of Row is \n";
    for (int i = 0; i < m; ++i) 
    {
        int rs = 0;
        for (int j = 0; j < n; ++j) 
        {
            rs = rs+  A[i][j];
        }
       cout << "Sum of row " << i + 1 << ": " << rs << endl;
    }
}

void C_W(const int A[][s], int x, int a) 
{
    cout << " sum of Column is \n";
    for (int j = 0; j < a; ++j)
    {
        int cs = 0;
        for (int i = 0; i < x; ++i) 
        {
            cs = cs + A[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << cs << std::endl;
    }
}

void displayM(const int A[][s], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}