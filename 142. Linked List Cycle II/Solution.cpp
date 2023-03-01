//https://leetcode.com/problems/linked-list-cycle-ii/?envType=study-plan&id=level-1
//code:-
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//1. Solution using hash map
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *start;
        start=head;
        unordered_map<ListNode*,int>mymap;
        while(start!=NULL){
            if(mymap.find(start)!=mymap.end()){
                return start;
            }
            mymap[start]++;
            start=start->next;
        }
        return NULL;
    }
};
//2. solution using two pointer
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
   return NULL;
    }
};
