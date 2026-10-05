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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>vec;
        ListNode* temp = list1;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* temp2 = list2;
        while(temp2!=nullptr){
            vec.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        for(int i=0;i<vec.size();i++){
            ListNode* newnode = new ListNode(vec[i]);
            if(head==nullptr){
                head=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
return head;
        
    }
};