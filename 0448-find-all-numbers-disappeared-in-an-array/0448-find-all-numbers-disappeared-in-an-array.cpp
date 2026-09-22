class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>vec;
        vector<int>sol;
        set<int>ans;
        for(auto x:nums){
            ans.insert(x);
        }
        for(auto x:ans){
            vec.push_back(x);
        }
        int last=nums.size();
        int count=1;
        int i=0;
        bool app=false;
        while(count<=last){
            if(i<vec.size()&&count==vec[i]){
               i++;
               
            }
            else{
                sol.push_back(count);
                
                
            }
            count++;
        }
        // if(sol.size()==0){
        //     sol.push_back(last+1);
        // }
        return sol;
       
    }
};