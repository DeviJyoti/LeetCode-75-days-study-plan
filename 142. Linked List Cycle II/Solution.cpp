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
