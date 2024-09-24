// You are given a image in n*m matrix now you have to rotate the image by 90 degree. Input : n=3, m=3 , image[3][3]={[1, 2, 3],[4,5,6],[7,8,9]}. 
//Output =7 4 1
//        8 5 2
//        9 6 3

// Take all input from user.

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
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0; i<n; i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
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