#include <iostream>
#include <math.h>
/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution
{
public:
    std::string longestPalindrome(std::string s)
    {
        if (s.empty())
        {
            return "";
        }
        else if (s.length() == 1)
        {
            return s;
        }

        std::string maxString = "";
        float center = 0.5;
        while (center < s.length() - 1)
        {
            float it = (center == round(center)) ? 0 : 0.5;
            while (round(center - it) > 0 || round(center + it) < s.length())
            {
                bool temp = s[round(center - it)] == s[round(center + it)];
                if (temp)
                {
                    it++;
                }
                if (round(center - it) < 0 || round(center + it) >= s.length())
                {
                    it--;
                    break;
                }
                if (!temp)
                {
                    it--;
                    break;
                }
            }
            if (maxString.length() < round(2 * it + 1))
            {
                maxString.clear();
                for (int i = round(center - it), n = round(center + it + 1); i < n; i++)
                {
                    maxString.push_back(s[i]);
                }
            }
            center += 0.5;
        }
        if (maxString.empty())
        {
            maxString.push_back(s[0]);
        }

        return maxString;
    };
};
// @lc code=end
