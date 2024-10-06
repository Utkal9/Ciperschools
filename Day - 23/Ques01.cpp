// You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target. If it is possible then print YES otherwise print NO. Sample testcase arr :[2,7,11,15], target = 9 output : YES . Write code that work in O(n^2) complexity and O(n*logn) complexity. Take all the required input from user.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){ // O(n^2) complexity
                a = 1;
            }
        }
    }
    if(a==1){
        cout<<"Yes !"<<endl;
    } else {
        cout<<"No.."<<endl;
    }
    return 0;
}