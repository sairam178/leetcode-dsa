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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        ListNode* ans=nullptr;
        ListNode* tail=nullptr;
        vector<int>vec;
        
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int mid=vec.size()/2;
        for(int i=mid;i<vec.size();i++){
           ListNode* newnode = new ListNode(vec[i]);
           if(ans==nullptr){
            ans=newnode;
            tail=newnode;
           }else{
            tail->next=newnode;
            tail=newnode;
           }
        }
        return ans;
        
    }
};