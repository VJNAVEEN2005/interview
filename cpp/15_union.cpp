#include <iostream>
#include <vector>
#include <set>
using namespace std;

void findUnion(const vector<int>& arr1, const vector<int>& arr2) {
    set<int> unionSet;

    // Insert elements of the first array into the set
    for (size_t i = 0; i < arr1.size(); ++i) {
        unionSet.insert(arr1[i]);
    }

    // Insert elements of the second array into the set
    for (size_t i = 0; i < arr2.size(); ++i) {
        unionSet.insert(arr2[i]);
    }

    // Display the union of the two arrays
    cout << "Union: { ";
    for (set<int>::iterator it = unionSet.begin(); it != unionSet.end(); ++it) {
        cout << *it << " ";
    }
    cout << "}" << endl;
}

int main() {
    // Example input
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    // Convert to vectors for compatibility with the function
    vector<int> array1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    vector<int> array2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

    // Find and display the union
    findUnion(array1, array2);

    return 0;
}
