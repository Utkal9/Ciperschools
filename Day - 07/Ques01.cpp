#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // arr = {4, 1, 3, 9, 7}
    // for i=0, j=0 --> 1 4 3 9 7
    //     i=0, j=1 --> 1 3 4 9 7
    //     i=0, j=2 --> 1 3 4 9 7
    //     i=0, j=3 --> 1 3 4 7 9
    return 0;
}