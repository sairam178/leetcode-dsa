class Solution {

public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        vector<vector<int>> original(n);
        for (int i = 1; i < n; i++) {
            original[parent[i]].push_back(i);
        }

        vector<int> newParent = parent;
        vector<int> last(26, -1);

        function<void(int)> dfs1 = [&](int node) {
            int c = s[node] - 'a';
            int old = last[c];

            if (node != 0) {
                if (last[c] != -1)
                    newParent[node] = last[c];
            }

            last[c] = node;

            for (int child : original[node]) {
                dfs1(child);
            }

            last[c] = old;
        };

        dfs1(0);

    
        vector<vector<int>> finalTree(n);

        for (int i = 1; i < n; i++) {
            finalTree[newParent[i]].push_back(i);
        }

        vector<int> answer(n, 0);

      
        function<int(int)> dfs2 = [&](int node) {
            int size = 1;

            for (int child : finalTree[node]) {
                size += dfs2(child);
            }

            answer[node] = size;
            return size;
        };

        dfs2(0);

        return answer;
    }
};
