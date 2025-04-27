#include <iostream>
using namespace std;

class A {
public:
    static int cnt; 

    A() {
        cnt++;
    }

    A(int a, int b) {
        cnt++;
    }
};


int A::cnt = 0;

int main() {
    A obj;      
    A obj1(2, 3); 

    cout << "Constructor called: " << A::cnt << " times" << endl;
    return 0;
}
