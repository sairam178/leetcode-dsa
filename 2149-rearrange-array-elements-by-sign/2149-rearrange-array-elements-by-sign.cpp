class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j=0,k=1;
        vector<int>sol(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                sol[j]=nums[i];
                j+=2;
            }
            else{
                sol[k]=nums[i];
                k+=2;
            }
        }
        return sol;
    }
};