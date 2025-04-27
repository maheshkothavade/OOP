// #include<iostream>
// using namespace std;

// class A{
//     public:
//          virtual void display(){
//             cout << "I'm base class " << endl;
//         }
// };

// class B: public A{
//     public:
//         void display(){ 
//             cout << "Im child class" << endl;
//         }
// };
// int main(){
//      A obj;
//      obj.display();
// }

// # 2.Virtual function

#include <iostream>
using namespace std;

class Base {
public:
     virtual void show() { 
        cout << "Base class show function\n";
    }
};

class Derived : public Base {
public:
    void show()  { 
        cout << "Derived class show function\n";
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    
   
    ptr->show(); 
    return 0;
}
