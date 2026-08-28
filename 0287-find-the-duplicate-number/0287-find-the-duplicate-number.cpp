class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> sol;
        // for(auto x:nums){
        //     sol[x]++;
        //     if(sol[x]>1){
        //         return x;
        //     }
        // }
        // return 0;

        int left=0;
        int right=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[left]==nums[right]){
                return nums[left];
            }
            else{
                left++;
                right++;
            }
        }
        return 0;
    }
};