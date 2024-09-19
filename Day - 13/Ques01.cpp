#include <iostream>
using namespace std;
int main() {
    int* dynamicVar = new int;
    *dynamicVar = 42;
    cout << "Value of dynamicVar: " << *dynamicVar << endl;
    delete dynamicVar;
    return 0;
}