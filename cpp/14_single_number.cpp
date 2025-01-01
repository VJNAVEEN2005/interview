#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        result = result ^ nums[i];                        // XOR - operation
    }
    return result;
}

int main() {
   
    int arr[] = {4, 1, 2, 1, 2};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // Find and display the single number
    int single = singleNumber(nums);
    cout << "The single number is: " << single << endl;

    return 0;
}
