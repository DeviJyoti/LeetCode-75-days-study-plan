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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* ptr=head;
//         if(head==NULL || head->next==NULL) return head;
         
//         int len=0;
//         while(ptr->next!=NULL)
//         {
//             ptr=ptr->next;
//             len=len+1;
//         }
//         int mid =len/2;
        
//         if(mid%2==0) mid=mid+1;
//         ptr=head;
//         int i=mid;
//         while(i!=len)
//         {
//             ptr=ptr->next;
//             i++;
//         }
//         head=ptr->next;
//         return head;
//     }
// };
//es code me sirf ek case pass nhi ho rha [1,2,3]


//second solution:-
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        auto slow = head, fast = head;
        while(fast && fast -> next) 
            slow = slow -> next,                                  // slow moves at 1 node / iteration
            fast = fast -> next -> next;                          // fast moves 2 nodes / iteration
        return slow;                                              // slow ends up at mid
    }
};
