class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> totalsum;
        int n = nums.size();
        int lsum=0;
        int rsum=0;
        for(int i=0;i<n;i++){
            if(i==0){
            leftsum.push_back(lsum);
            }
            lsum+=nums[i];
            leftsum.push_back(lsum);
           
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                rightsum.push_back(0);
            }
            rsum+=nums[i];
            rightsum.push_back(rsum);
        }

        for(int i=0;i<n;i++){
            int sum = abs(leftsum[i]-rightsum[n-i-1]);
            totalsum.push_back(sum);
        }
        return totalsum;


    }
};