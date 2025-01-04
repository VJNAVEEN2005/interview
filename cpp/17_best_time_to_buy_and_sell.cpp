#include <iostream>
#include <vector>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int minPrice = 1e9; // Set an initial large value for minimum price
    int maxProfit = 0;

    for (size_t i = 0; i < prices.size(); ++i) {
        // Update the minimum price so far
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        // Calculate profit if we sell at current price and update maxProfit
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    // Initialize the vector using an array and constructor
    int arr[] = {7, 1, 5, 3, 6, 4};
    vector<int> prices(arr, arr + sizeof(arr) / sizeof(arr[0])); // Convert array to vector

    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
