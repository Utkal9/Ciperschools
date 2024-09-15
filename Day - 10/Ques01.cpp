// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

#include<iostream>
using namespace std;
int findMax(const int arr[], int size){
    int maxVal = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main(){
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {1, 90, 39, 40, 30};
    int arr3[] = {10, 2, 3, 41, 5};
    int arr4[] = {100, 20, 90, 99, 50};
    cout<<findMax(arr1, 5)<<endl;
    cout<<findMax(arr2, 5)<<endl;
    cout<<findMax(arr3, 5)<<endl;
    cout<<findMax(arr4, 5)<<endl;
    return 0;
}