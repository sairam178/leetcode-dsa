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
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* temp=head;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int i=vec.size()-1;
        temp=head;
        while(temp!=nullptr){
            if(vec[i]!=temp->val){
                return false;
            }
            temp=temp->next;
            i--;
        }
        return true;
    }
};