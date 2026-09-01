class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> maps;
        int max=0;
        int num=0;
        for(auto x:nums){
            maps[x]++;
        }
        for(auto x:maps){
            if(x.second>max){
                max=x.second;
               num=x.first;
            }
        }
        return num;
        
    }
};