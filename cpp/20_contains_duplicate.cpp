#include <iostream>
#include <vector>
#include <set> // Use set instead of unordered_set
using namespace std;

bool containsDuplicate(const vector<int>& nums) {
    set<int> seen; // To store unique elements

    for (size_t i = 0; i < nums.size(); ++i) {
        // Check if the number is already in the set
        if (seen.find(nums[i]) != seen.end()) {
            return true; // Duplicate found
        }
        // Add the number to the set
        seen.insert(nums[i]);
    }

    return false; // No duplicates found
}

int main() {
    // Initialize the input array
    int arr[] = {1, 2, 3, 1};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    // Call the function and print the result
    cout << "Contains Duplicate: " << (containsDuplicate(nums) ? "true" : "false") << endl;

    return 0;
}
