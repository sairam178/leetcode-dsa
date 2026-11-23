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
    ListNode* insertionSortList(ListNode* head) {
        ListNode*temp=head;
        vector<int>vec;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        ListNode*newnode=nullptr;
        ListNode*ans=nullptr;
        ListNode*dup=nullptr;
        for(int i=0;i<vec.size();i++){
            newnode = new ListNode(vec[i]);
            if(ans==nullptr){
                dup=ans=newnode;
            }
            else{
                dup->next=newnode;
                dup=newnode;
            }
        }
        return ans;
    }

};