// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// Sample :- Input: nums = [2,2,1]
// Output: 1
// Note: Take all the required input from user.

#include <iostream>
using namespace std;
int singleNumber(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }
    return result;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int nums[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Single number is: " << singleNumber(nums, n) << endl;
    return 0;
}