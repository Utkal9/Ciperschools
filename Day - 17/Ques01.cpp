// Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

#include<iostream>
using namespace std;
int main(){
    int n,m,element,key, a=0;
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
    cout<<"Enter the key: ";
    cin>>key;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == key){
                a = 1;
            }
        }
    }
    if(a==1){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}