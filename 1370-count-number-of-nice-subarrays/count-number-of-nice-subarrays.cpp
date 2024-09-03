class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto &num:nums){
            if(num%2==0){
                num=0;
            }
            else{
                num=1;
            }
        }
        mpp[0]=1;
        int cnt=0;
        int sum=0;
        for(auto num:nums){
            sum+=num;
            cnt+=mpp[sum-k];
            mpp[sum]++;
        }
        return cnt;
    }
};