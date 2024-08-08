class Solution {
public:
// bool func(vector<int> vec,int target,int n){
//     int l=0;
//     int r=n-1;
//     if(vec[r]<target){
//         return false;
//     }
//     if(vec[l]>target){
//         return false;
//     }
//     while(l<=r){
//         int mid=l+(r-l)/2;
//         if(vec[mid]==target){
//             return true;
//         }
//         if(vec[mid]>target){
//             r=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return false;
// }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        // for(int i=0;i<n;i++){
        //     if(func(matrix[i],target,m)){
        //         return true;
        //     }
        // }
        //return false;
        int row=0;
        int col=m-1;
        while(row<n && col>=0){
            if(target==matrix[row][col]){
                return true;
            }
            if(target>matrix[row][col]){
                row++;
            }
            else{
                col--;
            }
        }
    return false;

    }
};