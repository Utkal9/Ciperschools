// Ques 2: Write a C++ program that take 2D array from user and then sort this array. Input n=3, m=3 array=7 4 1
// 8 5 2
// 9 6 3

// output :- 1 2 3
// 4 5 6
// 7 8 9

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no.of rows: ";
    cin>>n;
    cout<<"Enter no.of cols: ";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter elements: ";
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = i; k < n; k++) {
                for (int l = (k == i ? j + 1 : 0); l < m; l++) {
                    if (arr[i][j] > arr[k][l]) {
                        int temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}