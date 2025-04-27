#include<iostream>
using namespace std;

class Human{

   public:
       int height = 6;
       int weight=50;
       int age = 21;
    public:
       int getAge(){
         return this->age;
       }
       int getWeight(int w){
         return this->weight = w;
       }
};

class Male : public Human{
    public:
         string color = "Magenta";
         void sleep(){
            cout << "male sleeping";
         }
};

int main(){
   //  Male obj;
   //  cout << obj.height << endl;
   //  cout << obj.weight << endl;
   //  cout << obj.getAge() << endl;
   //  cout << obj.color << endl;
   //  obj.sleep();

   //  cout << endl;
    Human H1;
    cout << H1.getAge();
 
    

    
    
    
}

