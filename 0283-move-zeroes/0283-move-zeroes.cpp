class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       
        vector<int> vec;
        int count=0;
        for(auto x:nums){
            if(x==0){
                count++;
            }else{
                vec.push_back(x);
            }
        }

        for(int i=0;i<count;i++){
            vec.push_back(0);
        }
        nums.clear();
        for(auto x:vec){
            nums.push_back(x);
        }


         
    }
};