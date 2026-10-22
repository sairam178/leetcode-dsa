class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>vec;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                vec.push_back(arr[i]);
            }
            else{
                vec.push_back(arr[i]);
                vec.push_back(0);
            }
        }

        for(int i=0;i<arr.size();i++){
            arr[i]=vec[i];
        }
       
    }
};