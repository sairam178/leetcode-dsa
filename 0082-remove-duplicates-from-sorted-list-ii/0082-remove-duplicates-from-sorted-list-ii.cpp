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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>mp;
        ListNode* temp=head;
        vector<int>vec;
        while(temp!=nullptr){
            mp[temp->val]++;
            temp=temp->next;
        }
        ListNode* ans=nullptr;
        ListNode* tail=nullptr;
        for(auto x:mp){
            if(x.second<=1){
               vec.push_back(x.first);
            }
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