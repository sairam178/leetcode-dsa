class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const long long MOD = 1000000007;

        vector<int> pos;
        vector<int> digit;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
            }
        }

        int k = digit.size();

        vector<long long> pow10(k + 1, 1);
        for (int i = 1; i <= k; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        vector<long long> prefVal(k + 1, 0);
        vector<long long> prefSum(k + 1, 0);

        for (int i = 1; i <= k; i++) {
            prefVal[i] = (prefVal[i - 1] * 10 + digit[i - 1]) % MOD;
            prefSum[i] = prefSum[i - 1] + digit[i - 1];
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            int a = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int b = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;

            if (a > b) {
                ans.push_back(0);
                continue;
            }

            int L = a + 1;
            int R = b + 1;
            int len = R - L + 1;

            long long x = (prefVal[R] - prefVal[L - 1] * pow10[len]) % MOD;
            if (x < 0) x += MOD;

            long long sum = prefSum[R] - prefSum[L - 1];

            ans.push_back((x * sum) % MOD);
        }

        return ans;
    }
};