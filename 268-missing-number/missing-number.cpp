class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingnum=0;
        int n=nums.size();
        int summ=n*(n+1)/2;
        int suh=0;
        for(int i=0;i<n;i++){
            suh+=nums[i];
        }
        return abs(suh-summ);

    }
};