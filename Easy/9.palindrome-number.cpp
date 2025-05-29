/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        if (x == 0)
            return true;

        long long ten = 1;
        while (x / ten != 0)
        {
            ten *= 10;
        }
        ten /= 10;
        while (ten != 0)
        {
            if (x / ten != x % 10)
            {
                return false;
            }
            x %= ten;
            x /= 10;
            ten /= 100;
        }
        return true;
    }
};
// @lc code=end
