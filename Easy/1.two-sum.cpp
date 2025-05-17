#include <iostream>
#include <vector>
#include <map>
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{

public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::map<int, int> numMap;

        for (int i = 0, n = nums.size(); i < n; i++)
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
