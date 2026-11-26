class Solution {
public:
    bool canAliceWin(int n) {
        if(n<=9){
            return false;

        }
        int count=0;
        int k=10;
        int stone=n;
        while(stone>=k){
            stone=stone-k;
            count++;
            k--;
        }
        return count%2!=0;

    }
};