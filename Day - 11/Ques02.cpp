// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3

#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    int idx = 0;
    for(int i=1; i<=5; i++){
        if(arr[i]==target){
            idx = i+1;
        }
    }
    if(idx == 0){
        cout<<"-1"<<endl;
    } else {
        cout<<idx<<endl;
    }
    return 0;
}