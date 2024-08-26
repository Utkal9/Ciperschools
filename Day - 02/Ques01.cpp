#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a > b and a > c){
        cout<<"The largest number is: "<<a<<endl;
    } else if (b > c){
        cout<<"The largest number is: "<<b<<endl;
    } else {
        cout<<"The largest number is: "<<c<<endl;
    }
    return 0;
}