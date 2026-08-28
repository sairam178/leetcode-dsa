class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        

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