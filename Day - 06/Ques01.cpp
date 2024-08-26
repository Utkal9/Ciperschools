#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum<<endl;
    return 0;
}