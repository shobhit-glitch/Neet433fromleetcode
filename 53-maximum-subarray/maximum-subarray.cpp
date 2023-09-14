class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max=-99999;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            cout<<sum<<' ';
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max;

    }
};