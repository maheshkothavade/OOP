#include<iostream>
using namespace std;
class A{
    public:
     virtual void show()=0;
};
class B:public A{
     public:
     void show(){
        cout << "This is abstract class without pure virtual function" << endl;
     }
};

int main(){
   //A obj;                                  // We can't create an object of abstract class
   A* obj = new B();
   obj->show();
   return 0;
}