// #include<iostream>
// using namespace std;
// class A{
//   public:
//   int health;//4
//   char ch;               // 1(char) + 3 padding added = 4
//   string name;//24
// };
// class B : public A{
//     int health;
// };
// int main(){
//         B obj;
//     cout << "size of parent class " << sizeof(obj) ;

// }

#include<iostream>
using namespace std;
class A{
    char a ;
    int ad;
};

int main(){
   A obj;
   cout << "size of A class is " << sizeof(obj) << endl;
}
