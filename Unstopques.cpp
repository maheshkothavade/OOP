#include<iostream>
using namespace std;

class A {
public:
     A() {
         cout << "A Constructor\n"; 
     }
    ~A() { 
        cout << "A Destructor\n";
     }
};

class B : public A {
  public:
  B() { 
    cout << "B Constructor\n";
 }
  ~B() { 
    cout << "B Destructor\n"; 
 }
};

int main() {                                                // A Constructor
                                                            // B Constructor
   //                                                      // B Destructor 
     //                                                    // A Destructor 
B obj;
return 0;
}

// key points 
//Constructors are called in the order of inheritance (Base → Derived).
// Destructors are called in the reverse order (Derived → Base).