class Solution {
public:// with extra space 
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();// rows
        int m=matrix[0].size();// columns
        vector<int> rows(n,0);
        vector<int> cols(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows[i]=1;// mark the rows
                    cols[j]=1;// mark the columns
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rows[i]||cols[j])
                matrix[i][j]=0;
            }
        }
    }
};