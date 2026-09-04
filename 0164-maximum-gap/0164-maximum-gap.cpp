class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n= nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int max=0;
        int min=0;
        for(int i=0;i<n-1;i++){
               int sum=abs(nums[i]-nums[i+1]);
             
               if(sum>min){
                    max=sum;
                    min=max;
               }
        }
        return max;


    }
};