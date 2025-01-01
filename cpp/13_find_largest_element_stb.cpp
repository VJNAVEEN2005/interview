#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main()
{
    vector<int> arr1;
    arr1.push_back(2);
    arr1.push_back(5);
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(0);

    vector<int> arr2;
    arr2.push_back(8);
    arr2.push_back(10);
    arr2.push_back(5);
    arr2.push_back(7);
    arr2.push_back(9);

    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the array is: " << sortArr(arr2) << endl;

    return 0;
}