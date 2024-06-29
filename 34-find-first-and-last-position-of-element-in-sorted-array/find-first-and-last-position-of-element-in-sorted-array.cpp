class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(2,-1);
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i];
        // }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(cnt==0){
                    v[0]=i;
                    cnt++;
                }
                else{
                    v[1]=i;
                }
            }

        }
        if(cnt==1 && v[1]==-1){
            v[1]=v[0];
        }
        return v;

    }
};