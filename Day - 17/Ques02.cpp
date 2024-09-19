// Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.
#include<iostream>
using namespace std;
int main(){
    int n,m,sum=0;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter cols: ";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter elements: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}