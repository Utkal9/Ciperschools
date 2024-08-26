#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    int v = 0;
    int c = 0;
    cout<<"Enter a string: ";
    cin>>s1;
    for(int i=0; i<=s1.length(); i++){
        if((s1[i] == 'a') or (s1[i] == 'e') or (s1[i] == 'i') or (s1[i] == 'o') or (s1[i] == 'u') or (s1[i] == 'A') or (s1[i] == 'E') or (s1[i] == 'I') or (s1[i] == 'O') or (s1[i] == 'U')){
            v++;
        }
    }
    cout<<"Number of vowels: "<<v<<endl;
    cout<<"Number of consonants: "<<s1.length()-v<<endl;
    return 0;
}