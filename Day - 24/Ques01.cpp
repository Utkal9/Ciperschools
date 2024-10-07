// You are given a binary array. Your task is to find the maximum number of consecutive ones in array.
// Input :- arr :[1,1,0,1,1,1]
// Output: 3.
// Take all the required input from user.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout<<"Enter elements: ";
        cin >> arr[i];
    }
    int max_count = 0, current_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            current_count++;
            if (current_count > max_count) {
                max_count = current_count;
            }
        } else {
            current_count = 0;
        }
    }
    cout << max_count <<endl;
    return 0;
}