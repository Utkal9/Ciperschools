#include<iostream>
#include<string>
using namespace std;
int main(){
    int real_part1, imaginary_part1, real_part2, imaginary_part2;
    cout<<"Enter the real part of complex number 1: ";
    cin>>real_part1;
    cout<<"Enter the imaginary part of complex number 1: ";
    cin>>imaginary_part1;
    cout<<"Enter the real part of complex number 2: ";
    cin>>real_part2;
    cout<<"Enter the imaginary part of complex number 2: ";
    cin>>imaginary_part2;
    cout<<"Complex Number 1: "<<to_string(real_part1)+" + "+to_string(imaginary_part1)+"i"<<endl;
    cout<<"Complex Number 2: "<<to_string(real_part2)+" + "+to_string(imaginary_part2)+"i"<<endl;
    cout<<"Sum: "<<to_string(real_part1+real_part2)+" + "+to_string(imaginary_part1+imaginary_part2)+"i"<<endl;
    cout<<"Difference: "<<to_string(real_part1-real_part2)+" + "+to_string(imaginary_part1-imaginary_part2)+"i"<<endl;
    return 0;
}