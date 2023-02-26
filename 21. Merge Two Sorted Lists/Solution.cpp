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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* result=nullptr;
         ListNode* ptr=nullptr;
         ListNode* temp=nullptr;
        if(list1!=nullptr && list2==nullptr) //when list2 is empty
        {
            return list1;
            
        }
        if(list2!=nullptr && list1==nullptr) //when list1 is empty
        {
            return list2;
            
        }
         if(list1==nullptr && list2==nullptr) return nullptr;
        if(result==nullptr) 
        {
            if(list1->val <= list2->val)
            {
                ptr=new ListNode(list1->val);
                result=ptr;
                list1=list1->next; 
            }
            else
            {
                
                ptr=new ListNode(list2->val);
                result=ptr;
                list2=list2->next;
            }  
        }
        while(list1!=nullptr || list2!=nullptr)
        {
             if(list1!=nullptr && list2!=nullptr)
             {
                   if(list1->val<=list2->val)
            {
                  temp = nullptr;
                    temp = new ListNode(list1->val);
                    ptr->next = temp;
                    ptr = temp;
                    list1 = list1->next;
            }
            else
            {
                    temp = nullptr;
                    temp = new ListNode(list2->val);
                    ptr->next = temp;
                    ptr = temp;
                    list2 = list2->next;
            }
             }
          
            else break;
        }
        
     while(list1!=nullptr)
      {
          
                  temp = nullptr;
                    temp = new ListNode(list1->val);
                    ptr->next = temp;
                    ptr = temp;
                    list1 = list1->next;
      }
        while(list2!=nullptr)
        {
              temp = nullptr;
                temp = new ListNode(list2->val);
                ptr->next = temp;
                ptr = temp;
                list2 = list2->next;
        }
        return result;
        }
    
};
