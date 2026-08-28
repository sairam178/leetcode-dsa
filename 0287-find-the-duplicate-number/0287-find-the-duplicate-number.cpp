class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> sol;
        for(auto x:nums){
            sol[x]++;
            if(sol[x]>1){
                return x;
            }
        }
        return 0;
    }
};