class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n1=nums.size();
        vector<int> vec1;
        vector<int> vec2;
        vec1.push_back(nums[0]);
        vec2.push_back(nums[1]);
        int j=0;
        int k=0;
        for(int i=2;i<n1;i++){
            
         if(vec1[j]<vec2[k]){
                vec2.push_back(nums[i]);
                k++;
            }
            else{
                vec1.push_back(nums[i]);
                j++;
            }
        }
        vector<int>result;
        for(auto x:vec1){
            result.push_back(x);
        }
        for(auto x:vec2){
            result.push_back(x);
        }
        
        
        return result;
    }
};