class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstpos=0;
        int lastpos=0;
        int count=0;
        vector<int> sol;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                 if(count==0){

                firstpos=i;
                count++;
                }else{
                lastpos++;}
            }
            
        }
        if(count==0){
           sol.push_back(-1);
           sol.push_back(-1);
        }else{
            sol.push_back(firstpos);
            sol.push_back(lastpos+firstpos);
        }
        return sol;

    }
};