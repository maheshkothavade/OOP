#include<iostream>
using namespace std;

class Student{
     private:
        //string name="Mahesh";
        int age = 10;
        int height;

    public:
        int getAge(){
            return this->age;
            
        }
       public : string name="Mahesh";
};
class Book : public Student{
    
};
int main(){
      Student s1;
      Book B1;
     cout <<  B1.name << endl;
     //cout << B1.age << endl;
      //s1.name;
      cout << "Everything is ok";
}