class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            if(x%2==0){
                mp[x]++;
            }
        }
        int largest=0;
        int num=-1;
        for(auto x:mp){
            if(x.second>largest&&x.second!=largest){
                largest=x.second;
                num=x.first;
            }
            else if(x.second == largest && (num == -1 || x.first < num)) {
                num = x.first;
            }
        }
     return num;
    }
};