class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        int n1=matrix.size();
        int n2=matrix[0].size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        int n=ans.size();
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};