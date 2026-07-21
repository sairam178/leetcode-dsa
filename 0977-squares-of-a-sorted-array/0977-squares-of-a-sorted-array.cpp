class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sol;
        for(auto x:nums){
            int k = x*x;
            sol.push_back(k);
        } 
        sort(sol.begin(),sol.end());
        return sol;
    }
};