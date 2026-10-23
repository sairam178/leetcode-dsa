class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        int count=0;
        vector<int>front;
        vector<int>sec;
        for(auto x:arr){
            mp[x]++;
        }
        for(auto x:mp){
            front.push_back(x.first);
            sec.push_back(x.second);
            count++;
        }
        sort(sec.begin(),sec.end());
        for(int i=0;i<count-1;i++){
            if(sec[i]==sec[i+1]){
                return false;
            }
        }
        return true;
    }
};