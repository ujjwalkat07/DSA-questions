// Last updated: 9/7/2026, 9:13:01 PM
1class Solution {
2public:
3    ListNode* reverseList(ListNode* head) {
4
5        ListNode* prev = NULL;
6        ListNode* curr = head;
7
8        while(curr != NULL) {
9
10            ListNode* nextNode = curr->next;
11
12            curr->next = prev;
13
14            prev = curr;
15
16            curr = nextNode;
17        }
18
19        return prev;
20    }
21};