#include <iostream>
using namespace std;

struct MyStruct {
    int x;
    void display() { 
        cout << "Struct x: " << x << endl; 
    }
};

class MyClass {
    int y;
public:
    MyClass(int val) {
         y = val;
     }
    void display() {
         cout << "Class y: " << y << endl;
        
    }
};

int main() {
    MyStruct s1 = {10};  // Struct members are public by default
    s1.display();

    MyClass c1(20);  // Class members are private by default
    c1.display();

    
}
