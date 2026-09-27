class Solution {
public:
    int trailingZeroes(int n) {
        int zeros=0;
        long long int pow = 5;
        while(n/pow!=0){
            zeros+=n/pow;
            pow*=5;
        }
        return zeros;
       
    }
};