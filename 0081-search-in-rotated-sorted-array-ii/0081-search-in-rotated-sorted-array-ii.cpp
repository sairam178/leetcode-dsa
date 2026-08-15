class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<int> ans;
        for(auto x:nums){
            ans.insert(x);
        }
        for(auto x:ans){
            if(x==target){
                return true;
            }
        }
        return false;
    }
};