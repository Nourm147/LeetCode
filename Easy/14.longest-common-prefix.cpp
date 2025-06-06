#include <iostream>
#include <vector>
/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs)
    {
        std::string result = "";
        bool finished = false;
        int j = 0;
        while (!finished)
        {
            char pre = strs[0][j];
            for (int i = 0, n = strs.size(); i < n; i++)
            {
                std::string &str = strs[i];
                if (j >= str.length())
                {
                    finished = true;
                    break;
                }
                else if (str[j] == pre)
                {
                    continue;
                }
                finished = true;
                break;
            }
            if (!finished)
            {
                result.push_back(pre);
            }

            j++;
        }

        return result;
    }
};
// @lc code=end
