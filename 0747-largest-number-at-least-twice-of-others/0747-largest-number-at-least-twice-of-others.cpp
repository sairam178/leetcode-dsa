class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>sol;
        sol=nums;
        int ans=0;
        sort(nums.begin(),nums.end());
        int tar = nums[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++){
            if(tar<2*nums[i]){
                return -1;
            }
        }
        for(int i=0;i<sol.size();i++){
            if(sol[i]==tar){
                return i;
            }
        }
        return -1;
    }
};