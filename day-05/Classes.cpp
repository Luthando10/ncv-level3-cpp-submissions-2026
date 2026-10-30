
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;

public:
    // Default constructor
    Person();

    // Parameterized constructor
    Person(string nm, int ag, char gn);

    // Setter function
    void setPerson(string nm, int ag, char gn);

    // Getter functions
    string getName();
    int getAge();
    char getGender();
};

// Default constructor
Person::Person()
{
    name = "";
    age = 0;
    gender = 'U';
}

// Parameterized constructor
Person::Person(string nm, int ag, char gn)
{
    setPerson(nm, ag, gn);
}

// Setter function
void Person::setPerson(string nm, int ag, char gn)
{
    name = nm;

    if (ag >= 0 && ag <= 120)
        age = ag;
    else
        age = 0;

    gender = gn;
}

// Getter functions
string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

char Person::getGender()
{
    return gender;
}

// Main function
int main()
{
    Person p1("John", 25, 'M');

    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "Gender: " << p1.getGender() << endl;

    return 0;
}

