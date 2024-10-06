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
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];    // O(n logn) complexity
        if (sum == target) {
            cout << "YES" << endl;
            return 0;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    cout<<"No.."<<endl;
    return 0;
}