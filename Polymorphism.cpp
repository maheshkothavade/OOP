// #include<iostream>
// using namespace std;

// class A{

//    public:
//    void sayHello(){
//       cout << "Hello"<< endl;
//    }

//    void sayHello(string name){
//     cout << "Hii" << endl;
//    }

// };
// int main(){
//    A obj;
//    obj.sayHello();
// }

// // The operator . , :: can't be overloaded in c++

// // syntax for operator overloading in c++

// // return_type operator_keyword + (arguments) 

// Run time polymorphism 👇

#include<iostream>
using namespace std;

class A{
   public:
   int a = 2;
   void speak(int a){
      cout << "Speaking from class A which contains a as" << a << endl;
   }
};
class B:public A{
   public:
   void speak(){
      cout << "speaking from class B" << endl;
   }
};
int main(){
  B obj;
  obj.speak();
} 