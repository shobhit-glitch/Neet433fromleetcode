
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //************* [ n^4 TIME COMPLEXITY ] *****************
        // set<vector<int>> st;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             for(int l=k+1;l<n;l++){
        //                 long long sum=nums[i]+nums[j];
        //                 sum+=nums[k];
        //                 sum+=nums[l];
        //                 if(sum==target){
        //                     vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
        //                     sort(temp.begin(),temp.end());
        //                     st.insert(temp);

        //                 }
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>ans(st.begin(),st.end());
        // return ans;

        //************* [ nBETTER SOLUTION ] *****************
        //nums[l]=target-{nums[i]+nums[j]+nums[k]}
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long> hashset;
                for(int k=j+1;k<n;k++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    long long fth=target-sum;
                    if(hashset.find(fth) != hashset.end()){
                        vector<int>temp={nums[i],nums[j],nums[k], (int)(fth)};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};