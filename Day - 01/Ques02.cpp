#include<iostream>
using namespace std;
int main(){
    int a1, a2, a3, a4, a5;
    float avg;
    cout<<"Enter the grade 1: ";
    cin>>a1;
    cout<<"Enter the grade 2: ";
    cin>>a2;
    cout<<"Enter the grade 3: ";
    cin>>a3;
    cout<<"Enter the grade 4: ";
    cin>>a4;
    cout<<"Enter the grade 5: ";
    cin>>a5;
    float sum = a1+a2+a3+a4+a5;
    avg = sum/5;
    cout<<"The average grade is: "<<avg<<endl;
    return 0;
}