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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        vector<int>vec;
        while(temp!=nullptr){
            if(temp->val!=val){
               vec.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode*ans=nullptr;
        ListNode*tail=nullptr;
        for(int i=0;i<vec.size();i++){
            ListNode*newnode=new ListNode(vec[i]);
            if(ans==nullptr){
                temp=newnode;
                ans=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }
        }
        return ans;
    }
};