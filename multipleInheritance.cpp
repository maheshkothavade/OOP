#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

        public:
        void walk(){
            cout << " Animal walking" << endl;
        }
};
class Human{
    public:
       string color;
    public:
       void walk(){
           cout << " Human walking"<< endl;

       }
};

class Category : public Animal , public Human{
  
};

int main(){
    Category c;
    //c.bark();              
    // c.walk();              // This will create ambiguity
    c.Animal :: walk();       // ambiguity is resolved
}