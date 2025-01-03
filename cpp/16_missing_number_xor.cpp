#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& nums) {
    int n = nums.size();
    int xorAll = 0, xorNums = 0;

    // XOR all numbers from 0 to n
    for (int i = 0; i <= n; ++i) {
        xorAll ^= i;
    }

    // XOR all elements in the array
    for (size_t i = 0; i < nums.size(); ++i) {
        xorNums ^= nums[i];
    }

    return xorAll ^ xorNums; // The missing number
}

int main() {
    int arr[] = {3, 0, 1};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Initialize vector for C++98

    cout << "Missing Number: " << findMissingNumber(nums) << endl;
    return 0;
}
