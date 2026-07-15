class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for(int i=0;i<=n;i++){
            bits.push_back(bitset<64>(i).count());
        }
        return bits;
    }
};