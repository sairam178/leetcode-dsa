class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> num;
        for(int x:nums){
            num.push_back(x);
        }
        sort(num.begin(),num.end());
        int max = num[n];
        int peak=0;
        for(int i=0;i<=n;i++){
             if(nums[i]==max){
                peak=i;
             }
        }
return peak;
        
        
    }
};