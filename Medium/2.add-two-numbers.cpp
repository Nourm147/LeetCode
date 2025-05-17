/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        bool Finished = false;
        int sum = 0;
        ListNode *n1 = l1;
        ListNode *n2 = l2;
        ListNode *lresult = new ListNode();
        ListNode *nresult = lresult;
        while (!Finished)
        {
            if (n1 != nullptr)
            {
                sum += n1->val;
                n1 = n1->next;
            }
            if (n2 != nullptr)
            {
                sum += n2->val;
                n2 = n2->next;
            }
            nresult->val = sum % 10;
            sum /= 10;
            if (n1 != nullptr || n2 != nullptr || sum != 0)
            {
                nresult->next = new ListNode();
                nresult = nresult->next;
            }
            else
            {
                Finished = true;
            }
        }
        return lresult;
    }
};
// @lc code=end
