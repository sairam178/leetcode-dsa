class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n1=nums.size();
        int small = nums[0];
        int large=nums[n1-1];
        int i=0;
        vector<int>missing_elements;

        while(small<large){
          
            if(small==nums[i]){
                i++;
            }
            else{
            missing_elements.push_back(small);
            }
            ++small;
        }
        return missing_elements;
       

    }
};