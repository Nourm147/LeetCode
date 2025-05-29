#include <math.h>

/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int result = 0;
        while (x)
        {
            if (abs(result * 10.0) > __INT32_MAX__)
                return 0;
            result *= 10;
            result += x % 10;
            x /= 10;
        }

        return result;
    }
};
// @lc code=end
