class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     vector<int> sol;
     sort(nums.begin(),nums.end());
     for(auto x:nums){
        if(x%2==0){
            sol.push_back(x);
        }
     }  
     for(auto x:nums){
        if(x%2!=0){
            sol.push_back(x);
        }
     }  

     return sol;
    }
};