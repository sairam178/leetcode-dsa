class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive=0;
        int negative=0;
        for(auto x:nums){
            if(x<0){
            negative++;
            }
            else if(x>0){
                positive++;
            }
        }
        if(negative>=positive){
               return negative;
        }
        return positive;
    }
};