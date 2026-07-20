class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[0]!=0){
            return 0;
        }else{
            for(int i=0;i<n-1;i++){
                if(nums[i]-nums[i+1]!=-1){
                    return nums[i]+1;
                }
            }
        }
       
       int k = nums[n-1]+1;
       return k;


    }
};