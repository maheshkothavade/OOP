#include<iostream>
using namespace std;

class A{
    public: 
    int a = 3;
    int b = 1;
    char ch = 'a';

  //  cout << "before constructor anything called " << endl;
    
    A(){
        cout << "I'm a constructor called , I think object is created" << endl;
       
    }
    ~A(){       // destructor is called , when object goes out of scope
        cout << "I think object goes out of scope" << endl;
    }
};
int main(){
    A obj;
    
}