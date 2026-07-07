class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev=0;
        long long sum=0;
        while(n!=0){
            int temp = n%10;
            sum+=temp;
            if(temp!=0){
                rev=rev*10+temp;
            }
            n=n/10;
        }
        while(rev!=0){
           int temp=rev%10;
           n=n*10+temp;
           rev/=10;
        }
        return n*sum;
    }





};