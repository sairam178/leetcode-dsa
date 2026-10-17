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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>vec;
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int n=vec.size();
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i+1;j<n;j++){
                if(vec[i]<vec[j]&&vec[j]>sum){
                    sum=vec[j];
                    break;
                }
            }
            ans.push_back(sum);
        }
        return ans;

    }
};