class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int>vec;
        int n=nums.size();
        for(auto x:nums){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second>n/3){
                vec.push_back(x.first);
            }
        }
        return vec;

    }
};