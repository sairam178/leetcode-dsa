class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int n1 = nums[0];
        int n2 = nums[n-1];
        return gcd(n1,n2);
    }
};