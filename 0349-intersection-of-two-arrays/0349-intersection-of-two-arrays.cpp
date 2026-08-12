class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        for(auto x:nums1){
            for(auto y:nums2){
                if(x==y){
                    vec.push_back(y);
                }
            }
        }
        set<int> ans;
        for(auto x:vec){
            ans.insert(x);
        }
        vector<int> result;
        for(auto x:ans){
            result.push_back(x);
        }
        return result;
        
    }
};