// Last updated: 9/7/2026, 9:15:05 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14
15        ListNode* current=head;
16        ListNode* last=nullptr;
17        ListNode* temp=nullptr;
18
19        while(current!=nullptr){
20            temp=current->next;
21            current->next=last;
22            last=current;
23            current=temp;
24        }
25        return last;
26    }
27};