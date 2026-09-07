class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>vec;
        long long k = num;
        for(long long i=num/3-100;i<num/3+100;i++){
            long long x1=i;
            long long x2=i+1;
            long long x3=i+2;
           long long sum=x1+x2+x3;
            if(sum==k){
                vec.push_back(x1);
                vec.push_back(x2);
                vec.push_back(x3);
                
            }
            if(sum>k){
                return vec;
            }
        }
        return vec;
    }
};