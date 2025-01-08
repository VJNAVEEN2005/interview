#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }

        return result;
    }
};

int main()
{
    int arr[] = {2, 7, 11, 15};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));

    Solution s;

    vector<int> result = s.twoSum(nums, 9);

    cout << "Result: " << result.back() << " ";
    result.pop_back();
    cout << result.back() << endl;
}