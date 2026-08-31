class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> vec;
        for(auto num:nums){
            vector<int>temp;
            while(num!=0){
                temp.push_back(num%10);
                num/=10;
            }
            for(int i=temp.size()-1;i>=0;i--){
                vec.push_back(temp[i]);
            }
        }
        return vec;

    }
};