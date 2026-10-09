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
    ListNode* sortList(ListNode* head) {
        vector<int>vec;
        ListNode *ans=nullptr;
        ListNode *tail=nullptr;
        ListNode *temp=head;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            ListNode* newnode = new ListNode(vec[i]);
            if(ans==nullptr){
                ans=newnode;
                tail=newnode;
            }
            else{
                tail->next=newnode;
                tail=newnode;
            }
        }
        return ans;
    }
};