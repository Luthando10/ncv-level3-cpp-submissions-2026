#include <iostream>
using namespace std;

// prototypes
void getNumbers(int &a, int &b);
void displaySum(int a, int b);
void displayDiff(int a, int b);
void displayProduct(int a, int b);
void displayQuotient(int a, int b);

int main(){
    int x, y;
    getNumbers(x, y);
    displaySum(x, y);
    displayDiff(x, y);
    displayProduct(x, y);
    displayQuotient(x, y);
    return 0;
}

void getNumbers(int &a, int &b){
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}
void displaySum(int a, int b){
    cout << "Sum: " << a + b << endl;
}
void displayDiff(int a, int b){
    cout << "Difference: " << a - b << endl;
}
void displayProduct(int a, int b){
    cout << "Product: " << a * b << endl;
}
void displayQuotient(int a, int b){
    if(b != 0) cout << "Quotient: " << (double)a / b << endl;
    else cout << "Quotient: Cannot divide by zero" << endl;
}
