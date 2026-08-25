class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> vec;
        set<int> vecs;
        for(auto x:nums){
            if(x%k==0){
                vecs.insert(x);
            }
        }
       
        for(auto x:vecs){
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        int n=vec.size();
        for(int i=0;i<n;i++){
            int sol=k*(i+1);
            if(vec[i]!=sol){
                return sol;
            }
        }
        return k*(n+1);

    }
};