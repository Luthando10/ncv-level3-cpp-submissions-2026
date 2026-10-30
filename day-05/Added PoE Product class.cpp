#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product() {
        productCode = "";
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    // Setter with validation
    bool setProductData(string code, string name, double p, int qty) {
        if (code.empty() || name.empty()) {
            cout << "Error: Product code and name cannot be empty." << endl;
            return false;
        }
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

    // Getters
    string getProductCode() const { return productCode; }
    string getProductName() const { return productName; }
    double getPrice() const { return price; }
    int getQuantityInStock() const { return quantityInStock; }
};

// ===== NON-MEMBER FUNCTIONS ADDED TODAY =====

// 1. GetProductData – receive a product object and populate it with user data
void GetProductData(Product &p) {
    string code, name;
    double price;
    int qty;

    cout << "Enter Product Code: ";
    getline(cin, code);
    cout << "Enter Product Name: ";
    getline(cin, name);
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Quantity in Stock: ";
    cin >> qty;
    cin.ignore(); // clear newline

    if (!p.setProductData(code, name, price, qty)) {
        cout << "Failed to set product. Using defaults." << endl;
    }
}

// 2. DisplayProduct – receive a product object and display all data
void DisplayProduct(Product p) {
    cout << "\n--- Product Details ---" << endl;
    cout << "Product Code: " << p.getProductCode() << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << p.getPrice() << endl;
    cout << "Quantity in Stock: " << p.getQuantityInStock() << endl;
}

// 3. prodCompare – receive two products and check if names start with same character
void prodCompare(Product p1, Product p2) {
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    if (name1.empty() || name2.empty()) {
        cout << "Cannot compare, one product name is empty." << endl;
        return;
    }

    if (tolower(name1[0]) == tolower(name2[0])) {
        cout << "Both products '" << name1 << "' and '" << name2
             << "' start with the same character '" << name1[0] << "'." << endl;
    } else {
        cout << "Products '" << name1 << "' and '" << name2
             << "' do NOT start with the same character." << endl;
    }
}

// Main program to test everything
int main() {
    Product prod1, prod2;

    cout << "Enter details for Product 1:" << endl;
    GetProductData(prod1);

    cout << "\nEnter details for Product 2:" << endl;
    GetProductData(prod2);

    // Display using non-member function
    DisplayProduct(prod1);
    DisplayProduct(prod2);

    // Compare
    cout << "\n--- Comparison ---" << endl;
    prodCompare(prod1, prod2);

    return 0;
}
