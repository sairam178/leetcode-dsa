class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>vec;
        vector<int>sol;
        unordered_map<int,int> mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
               vec.push_back(grid[i][j]);
               mp[grid[i][j]]++;
            }
        }
        int count=1;
        bool b=false;
        sort(vec.begin(),vec.end());
        // for(int i=0;i<vec.size()-1;i++){
        //        if(vec[i]==vec[i+1]){
        //         sol.push_back(vec[i]);
        //        }
        // }
        for(auto x:mp){
            if(x.second>1){
                sol.push_back(x.first);
            }
        }


        for(int i=0;i<vec.size();i++){
           if(vec[i]==count){
            count++;
           }
           if(vec[i]>count){
            sol.push_back(count);
            b=true;
            break;
           }
        }

        if(b!=true){
            sol.push_back(count++);
        }
return sol;
        
    }
};