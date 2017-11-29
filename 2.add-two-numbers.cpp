/*
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers
 *
 * algorithms
 * Medium (28.10%)
 * Total Accepted:    391.1K
 * Total Submissions: 1.4M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode * ret = NULL;
		ListNode * p = NULL;
		int sum = 0;
		while(l1 || l2 || sum)
		{
			sum += ((l1 ? l1->val : 0) + (l2 ? l2->val : 0));
			if(ret == NULL)
			{
				ret = new ListNode(sum%10);
				p = ret;
			}
			else
			{
				p->next = new ListNode(sum%10);
				p = p->next;
			}
			sum = sum/10;
			l1 = l1 ? l1->next : NULL;
			l2 = l2 ? l2->next : NULL;
		}
		return ret;
    }
};