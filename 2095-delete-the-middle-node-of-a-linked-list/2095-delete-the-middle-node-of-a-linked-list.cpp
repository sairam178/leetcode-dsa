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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        vector<int>vec;
        vector<int>ans;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int mid = vec.size()/2;
        for(int i=0;i<vec.size();i++){
            if(i!=mid){
            ans.push_back(vec[i]);
            }
        }
        ListNode* sol=nullptr;
        ListNode* tail=nullptr;
        for(int i=0;i<ans.size();i++){
            ListNode*newnode = new ListNode(ans[i]);
            if(sol==nullptr){
                sol=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        return sol;
    }
};