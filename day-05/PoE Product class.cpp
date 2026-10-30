#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productCode;    // added for Picture 2 - example output
    string productName;
    double price;
    int quantityInStock;

public:
    // 1. Default constructor - initializes every member to sensible default
    Product() {
        productCode = "";
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    // 2. Setter method to set all data members with validation
    bool setProductData(string code, string name, double p, int qty) {
        // Validation: product code and name cannot be empty
        if (code.empty() || name.empty()) {
            cout << "Error: Product code and name cannot be empty." << endl;
            return false;
        }
        // Validation: price and quantity must not be negative
        if (p < 0 || qty < 0) {
            cout << "Error: Price and quantity must not be negative." << endl;
            return false;
        }
        productCode = code;
        productName = name;
        price = p;
        quantityInStock = qty;
        return true;
    }

    // Individual setters - also required by checklist "one setter for every member"
    bool setProductCode(string code) {
        if (code.empty()) return false;
        productCode = code;
        return true;
    }
    bool setProductName(string name) {
        if (name.empty()) return false;
        productName = name;
        return true;
    }
    bool setPrice(double p) {
        if (p < 0) return false;
        price = p;
        return true;
    }
    bool setQuantityInStock(int qty) {
        if (qty < 0) return false;
        quantityInStock = qty;
        return true;
    }

    // 3. Getters for every data member
    string getProductCode() const { return productCode; }
    string getProductName() const { return productName; }
    double getPrice() const { return price; }
    int getQuantityInStock() const { return quantityInStock; }
};

// Main program requirements
int main() {
    // 1. Create a Product object using default constructor
    Product product1;

    // 2. Use setter methods to assign values
    cout << "--- Test 1 ---" << endl;
    product1.setProductData("P101", "Wireless Mouse", 249.99, 15);

    // 3. Use getter methods to display
    cout << "Product Code: " << product1.getProductCode() << endl;
    cout << "Product Name: " << product1.getProductName() << endl;
    cout << "Price: R" << product1.getPrice() << endl;
    cout << "Quantity in Stock: " << product1.getQuantityInStock() << endl;

    // 4. Test with second set of product information
    cout << "\n--- Test 2 ---" << endl;
    Product product2;
    product2.setProductData("P102", "USB Keyboard", 399.50, 25);

    cout << "Product Code: " << product2.getProductCode() << endl;
    cout << "Product Name: " << product2.getProductName() << endl;
    cout << "Price: R" << product2.getPrice() << endl;
    cout << "Quantity in Stock: " << product2.getQuantityInStock() << endl;

    // Test validation
    cout << "\n--- Test Validation ---" << endl;
    Product product3;
    product3.setProductData("", "Invalid", -10, -5); // should fail

    return 0;
}
