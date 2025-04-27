#include<iostream>
using namespace std;

class Vehicle{
    public:
    int a = 2;
    void help(){
        cout << "value of a " << a << endl;
    }
};
int main(){
    // Vehicle v1;
    // v1.help();
    Vehicle *v1 = new Vehicle; 
    v1->help();
    delete v1;
    cout << sizeof(*v1) ;
}