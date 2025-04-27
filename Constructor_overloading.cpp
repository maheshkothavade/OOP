#include<iostream>
using namespace std;
class A{
     public:
         A(){
            cout << "I am default constructor" << endl;
         }
         A(int x){
            cout << "I am paramterized constructor" << endl;
         }
};

int main(){
     
    // A obj1;
    A obj2(2);

     


}