class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>num;
        vector<int>ans;
        int n=nums.size();
        for(auto x:nums){
            num.push_back(x);
        }
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[i]>num[j]){
                    count++;
                }
            }
            ans.push_back(count);

        }
        return ans;
    }
};