class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int k=n;
        while(n!=0){
            int temp = n%10;
            sum+=temp;
            mul*=temp;
            n/=10;
        }
        int total=sum+mul;
        if(k%total==0){
            return true;
        }else{
            return false;
        }

        
    }
};