// Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES

#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[] = {2, 4, 6, 7, 8};
    int target = 10;
    int a = 0;
    for(int i=0; i<5; i++){
        if(arr[i]==target){
            a = 1;
        }
    }
    if(a==1){
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}