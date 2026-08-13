class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> ans;
        vector<int>vec;
        for(auto x:nums){
            ans.insert(x);
        }
        int n = ans.size();
        for(auto x:ans){
            vec.push_back(x);
        }
        if(n<3){
            return vec[n-1];
        }
        return vec[n-3];
    }
};