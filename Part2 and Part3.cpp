#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ===== Part 2 Prototypes =====
void getNumbers(int &a, int &b);
int calcSum(int a, int b);
int calcDiff(int a, int b);
int calcProduct(int a, int b);
double calcQuotient(int a, int b);

int main()
{
    //random numbers 1 to 50 =====
    srand(time(0));
    int num1 = rand() % 50 + 1;
    int num2 = rand() % 50 + 1;

    char op;
    cout << "Generated numbers: " << num1 << " and " << num2 << endl;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // ===== Part 3: switch to choose correct Part 2 function =====
    switch(op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << calcSum(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << calcDiff(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << calcProduct(num1, num2) << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << calcQuotient(num1, num2) << endl;
            else
                cout << "Cannot divide by zero!" << endl;
            break;
        default:
            cout << "Invalid math operation!" << endl;
    }

    return 0;
}

// Part 2 Function Definitions
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
    return (double)a / b;
}
