class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        vector<int>vec;
        for(auto x:arr1){
            mp[x]++;
        }
        for(int i=0;i<arr2.size();i++){
            for(auto x:mp){
                if(x.first==arr2[i]){
                    int n = x.second;
                    for(int j=0;j<n;j++){
                        vec.push_back(arr2[i]);
                    }
                     mp.erase(x.first);
                    break;
                }
            }
        }

        vector<int>remaining;

        for(auto x:mp){
            for(int j=0;j<x.second;j++){
                remaining.push_back(x.first);
            }
        }

        sort(remaining.begin(),remaining.end());

        for(auto x:remaining){
            vec.push_back(x);
        }
        return vec;

    }
};