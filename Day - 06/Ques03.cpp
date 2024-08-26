#include<iostream>
using namespace std;
int main(){
    int n,ce=0,co=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            ce++;
        } else {
            co++;
        }
    }
    cout<<"Number of odd numbers: "<<co<<endl;
    cout<<"Number of even numbers: "<<ce<<endl;
    return 0;
}