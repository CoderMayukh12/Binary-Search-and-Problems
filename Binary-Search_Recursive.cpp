#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int BinarySearch(vector<int> &nums, int left, int right, int target)
    {
        // Base-Case Condition
        if (left > right)
            return -1;
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            return BinarySearch(nums, mid + 1, right, target);
        else
            return BinarySearch(nums, left, mid - 1, target);
    }

public:
    int search(vector<int> &nums, int target)
    {
        return BinarySearch(nums, 0, nums.size() - 1, target);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << s.search(nums, target) << endl;
    return 0;
}