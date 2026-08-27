class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int left=0;
        int right=matrix[0].size()-1;
        int bottom =matrix.size()-1;
        vector<int> ans;
        while(top<=bottom && left<=right){
            //left->right
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);

            }
            top++;
            //top->bottom
            for(int j=top;j<=bottom;j++){
                ans.push_back(matrix[j][right]);
            }
            right--;
            //right->left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
            }
         bottom--;
         if(left<=right){
            for(int i=bottom;i>=top;i--)
            ans.push_back(matrix[i][left]);
         }
         left++;
        }
        return ans;
    }
};