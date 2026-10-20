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
    ListNode* rotateRight(ListNode* head, int k) {
         vector<int>nums;
         ListNode*temp=head;
         ListNode*ans=nullptr;
         ListNode*tail=nullptr;
         while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
         }


        int n = nums.size();
        if (n == 0) return ans;
        k = k % n;
        vector<int>vec;
      
       for(int i=n-k;i<n;i++){
        vec.push_back(nums[i]);
       }
       for(int i=0;i<n-k;i++){
        vec.push_back(nums[i]);
       }
      for(int i=0;i<n;i++){
        ListNode* newnode=new ListNode(vec[i]);
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