class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even_vec1;
        vector<int> odd_vec2;
        vector<int> sol;
        for(auto x:nums){
            if(x%2==0){
                even_vec1.push_back(x);
            }else{
                odd_vec2.push_back(x);
            }
        }

        int n = nums.size();
        for(int i=0;i<n/2;i++){
             sol.push_back(even_vec1[i]);
              sol.push_back(odd_vec2[i]);
        }
        return sol;

    }
};