class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        if (n == 0) return;

        k = k % n;
       vector<int>vec;
       for(int i=n-k;i<n;i++){
        vec.push_back(nums[i]);
       }
       for(int i=0;i<n-k;i++){
        vec.push_back(nums[i]);
       }
       nums=vec;
        
        
    }
};