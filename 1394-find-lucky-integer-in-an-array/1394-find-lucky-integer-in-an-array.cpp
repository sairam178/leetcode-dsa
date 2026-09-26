class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        int largest=-1;
        int high=-1;
        for(auto x :mp){
            if(x.first==x.second){
                largest=x.first;
                if(largest>high){
                    high=largest;
                }
            }
        }
        
        return high;

        
    }
};