#include<iostream>
#include<string>
using namespace std;
int main(){
    int len;
    string s1;
    cout<<"Enter a string: ";
    cin>>s1;
    string s2 = "";
    for(int i=s1.length(); i>=0; i--){
        s2+=s1[i];
    }
    cout<<"Reversed string: "<<s2;
    return 0;
}