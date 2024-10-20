// We have to Implement Just the lower Bound
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int lowerBound(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1, ans = nums.size();
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target)
            {
                ans = mid;
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return ans;
    }

public:
    int searchInsert(vector<int> &nums, int target)
    {
        // auto it =lower_bound(nums.begin(),nums.end(),target);

        // int idx=it-nums.begin();

        // return idx;
        return lowerBound(nums, target);
    }
};