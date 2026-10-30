
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ===== Function Prototypes =====
void getNumbers(int &a, int &b);
int calcSum(int a, int b);
int calcDiff(int a, int b);
int calcProduct(int a, int b);
double calcQuotient(int a, int b);

int main()
{
    int num1, num2;

    // Get numbers from the user
    getNumbers(num1, num2);

    // Display calculation results
    cout << "Sum: " << calcSum(num1, num2) << endl;
    cout << "Difference: " << calcDiff(num1, num2) << endl;
    cout << "Product: " << calcProduct(num1, num2) << endl;

    // Prevent division by zero
    if (num2 != 0)
    {
        cout << "Quotient: " << calcQuotient(num1, num2) << endl;
    }
    else
    {
        cout << "Error: Cannot divide by zero." << endl;
    }

    return 0;
}

// ===== Function Definitions =====
void getNumbers(int &a, int &b)
{
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
}

int calcSum(int a, int b)
{
    return a + b;
}

int calcDiff(int a, int b)
{
    return a - b;
}

int calcProduct(int a, int b)
{
    return a * b;
}

double calcQuotient(int a, int b)
{
    return static_cast<double>(a) / b;
}
