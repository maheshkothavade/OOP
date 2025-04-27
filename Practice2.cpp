#include<iostream>
using namespace std;
class A{
    public:
    int a = 1;
    char ch = 'a';
    static int fun(){
       cout << "I'm  function called" << endl;
    }
};
int main(){
    cout << A::fun();
}