#include<iostream>
using namespace std;

struct A{
    //public:
     
       void add(int a,int b){
           cout << "Hii , values of a and b are " << a << " " << b;
       }
};
int main(){
        A obj;
        obj.add(2,4);
}