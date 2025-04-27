#include<iostream>                  // Diamond problem solution
using namespace std;
class A {
    public:
        void show() {
            cout << "Class A" << endl;
        }
    };
    
    class B : virtual public A {};  // Virtual Inheritance
    class C : virtual public A {};  // Virtual Inheritance
    
    class D : public B, public C {};  // No ambiguity
    
    int main() {
        D obj;
        obj.show();  //  Calls A::show() without ambiguity
        return 0;
    }
    