#include <iostream>
/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(std::string s)
    {
        std::string checker = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            {
                checker.push_back(s[i]);
            }
            else
            {
                if (checker.empty())
                {
                    return false;
                }
                if (open(s[i]) == checker.back())
                {
                    checker.pop_back();
                }
                else
                {
                    return false;
                }
            }
        }
        if (checker.empty())
        {
            return true;
        }
        return false;
    }
    char open(char close)
    {
        if (close == '}')
        {
            return '{';
        }

        if (close == ']')
        {
            return '[';
        }

        if (close == ')')
        {
            return '(';
        }
        return '\0';
    }
};
// @lc code=end
