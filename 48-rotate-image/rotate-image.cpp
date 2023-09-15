class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //*******************FIRST SOLUTION [ BRUTE FORCE ]*******************
        // vector<vector<int>>ans(n, vector<int>(n));
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         ans[j][n-i - 1]=matrix[i][j];
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         matrix[i][j]=ans[i][j];
        //     }
        // }
        //*******************SECOND SOLUTION [ TRANSPOSE AND REVERSE ]*******************
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);

            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};