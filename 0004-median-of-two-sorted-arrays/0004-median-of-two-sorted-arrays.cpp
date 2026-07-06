class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>nums3 ;
        for(auto x:nums1){
            nums3.push_back(x);
        }
        for(auto x:nums2){
            nums3.push_back(x);
        }

        int n=nums1.size();
        int m=nums2.size();
        int s=n+m;
       sort(nums3.begin(),nums3.end());
        int g;
       int k=nums3.size();
       if(k%2==0){
        int l=k/2;
        int p = nums3[l-1]+nums3[l];
        return p/2.0;;
       }
        else{
            g = k/2;
        }
        return nums3[g];
       
    }
};