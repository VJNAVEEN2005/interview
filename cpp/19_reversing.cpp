#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;                 // Start pointer
    int right = s.size() - 1;     // End pointer

    // Swap characters while left < right
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    // Initialize the input array
    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    vector<char> s(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    reverseString(s); // Call the function to reverse the string

    // Print the reversed string
    cout << "Reversed String: ";
    for (size_t i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
