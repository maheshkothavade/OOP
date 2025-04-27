#include <iostream>
using namespace std;

class MyClass {
    int a;      // 4 bytes
    void cal(){
        cout << "how are you " << endl;
    }
};

int main() {
    MyClass c1;

    cout << "Size of MyClass: " << sizeof(c1) << " bytes" << endl;
    return 0;
}
