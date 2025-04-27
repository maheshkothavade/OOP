#include<iostream>
using namespace std;

class Base {
protected:
    Base() {
        std::cout << "Protected constructor" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor" << std::endl;
    }
};

int main() {
    // Base obj; // Error: constructor is protected
    Derived obj; // can be created
    return 0;
}
