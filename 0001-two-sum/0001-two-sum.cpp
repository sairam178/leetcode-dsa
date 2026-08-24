class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sums;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int sum=target-nums[i];
            if(sums.find(sum)!=sums.end()){
                return {sums[sum],i};
            }
            else{
                sums[nums[i]]=i;
            }
        }
return {};
    }
};