class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int>vec;
        for(auto x:nums){
            if(x>0){
                vec.push_back(x);
            }
        }
        int n = vec.size();
        int count=1;
        set<int> arr;
        for(auto x:vec){
            arr.insert(x);
        }
        vec.clear();
        for(auto x:arr){
            vec.push_back(x);
        }
        for(int i=0;i<n;i++){
            if(vec[i]==count){
                 count++;
            }else{
                return count;
            }   
        }
        return count++;
    }
};