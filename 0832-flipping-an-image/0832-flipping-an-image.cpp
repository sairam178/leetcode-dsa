class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
          int n1=image.size();
          int n2=image[0].size();
          vector<vector<int>> vec;
          
          for(int i=0;i<n1;i++){
            vector<int> row;
            for(int j=n2-1;j>=0;j--){
                if(image[i][j]==1){
                 row.push_back(0);}
                 else{
                    row.push_back(1);
                 }
            }
            vec.push_back(row);

          }
          return vec;

    }
};