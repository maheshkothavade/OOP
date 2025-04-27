// #include<iostream>                                     // practice 1
// using namespace std;
// class Hero{
//     public:
//     int health = 2;
//     public:
//     string name = "Mahesh";
       
// };

// int main(){
//    Hero h1;
//    cout << "Hero's health " << h1.health << endl;
//    cout << "Hero's name " << h1.name;
// }

// practice 2

#include<iostream>
using namespace std;
class Hero{
    int health;
    int hea;
    char ch;
    public :
     void help(){
        cout << "help kar do" << endl;
        
     }
    char ch1;
    int a;
    char chas;
    string name;        // it requires 24 bytes
};

int main(){
 // *h1 = new Hero();            // dynamic creation of objects
   Hero h1;
  cout << "size of Hero class " << sizeof(h1) << endl;

}