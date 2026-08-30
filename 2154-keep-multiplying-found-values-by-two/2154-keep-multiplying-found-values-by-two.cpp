class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int mul=0;

        sort(nums.begin(),nums.end());
        for(auto x:nums){
            if(x==original&&mul==0){
                mul+=x;
            }

            if(x==mul){
                mul*=2;
            }
        }
        if(mul==0){
            return original;
        }
        return mul;
    }
};