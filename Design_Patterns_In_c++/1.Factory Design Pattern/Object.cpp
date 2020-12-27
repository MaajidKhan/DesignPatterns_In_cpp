#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

class Toy {
protected:
    string name;
    float price;
public:
    virtual void prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLabel() = 0;
    virtual void showProduct() = 0;
};

class Car : public Toy {
    // make all constructor private or protected!
public:
    void prepareParts() { cout << "Preparing car parts" << endl; }
    void combineParts() { cout << "Combining car parts" << endl; }
    void assembleParts() { cout << "Assembling car parts" << endl; }
    void applyLabel() { cout << "Applying Car Label" << endl; name = "Car"; price = 10;}
    void showProduct() { cout << "Name: " << name << endl << "Price: " << price << endl; }
};

/*
In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
You will learn more about Inheritance later.

*/

class Bike : public Toy {
    // make all constructor private or protected!
public:
    void prepareParts() { cout << "Preparing car parts" << endl; }
    void combineParts() { cout << "Combining car parts" << endl; }
    void assembleParts() { cout << "Assembling car parts" << endl; }
    void applyLabel() { cout << "Applying Car Label" << endl; name = "Car"; price = 10;}
    void showProduct() { cout << "Name: " << name << endl << "Price: " << price << endl; }
};

class Plane : public Toy {
    // make all constructor private or protected!
public:
    void prepareParts() { cout << "Preparing car parts" << endl; }
    void combineParts() { cout << "Combining car parts" << endl; }
    void assembleParts() { cout << "Assembling car parts" << endl; }
    void applyLabel() { cout << "Applying Car Label" << endl; name = "Car"; price = 10;}
    void showProduct() { cout << "Name: " << name << endl << "Price: " << price << endl; }
};
