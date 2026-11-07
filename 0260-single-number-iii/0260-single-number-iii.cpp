class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>vec;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second==1){
                vec.push_back(x.first);
            }
        }
        return vec;
        
    }
};