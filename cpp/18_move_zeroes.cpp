#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0; // Tracks the position to place the next non-zero element

    // Move all non-zero elements to the beginning of the array
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    // Fill the rest of the array with zeros
    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex++] = 0;
    }
}

int main() {
    // Initialize the input array
    int arr[] = {0, 1, 0, 3, 12};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    moveZeroes(nums); // Call the function to move zeroes

    // Print the modified array
    cout << "Modified Array: ";
    for (size_t i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
