#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<"Addition: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    if(b==0){
        cout<<"Division: Undefined"<<endl;
    } else {
        float div;
        div = float(a)/float(b);
        cout<<"Division: "<<div<<endl;
    }
    cout<<"Modulus: "<<a%b<<endl;
    return 0;
}