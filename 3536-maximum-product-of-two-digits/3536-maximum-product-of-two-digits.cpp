class Solution {
public:
    int maxProduct(int n) {
        int max=0;
        vector<int> vec;
        while(n!=0){
            int temp =n%10;
            vec.push_back(temp);
            n=n/10;
        }
        int size = vec.size();
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                int product=vec[i]*vec[j];
                if(product>max){
                    max=product;
                }
            }
        }
        return max;
    }

};