#include<iostream>
using namespace std;
int main(){
    int n,e=0,o=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            e+=arr[i];
        } else {
            o+=arr[i];
        }
    }
    cout<<"Sum of odd numbers: "<<o<<endl;
    cout<<"Sum of even numbers: "<<e<<endl;
    return 0;
}