#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

        public:
        void speak(){
            cout << "Barking like a dog" << endl;
        }
};
class Dog : public Animal{
       
};
class Germanshephard : public Dog{

};
int main(){
    Germanshephard g;
    g.speak();
}

