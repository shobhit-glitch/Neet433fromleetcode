class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int i;
        // for(i=0;i<nums.size();i++){
        //     if(nums[i]!=i){
        //         break;
        //     }
        // }
        // return i;   // TIME COMPLEXITY -> Nlog(N)+N
        int N=nums.size();
        int sum=N*(N+1)/2;
        int sumo=0;
        for(int i=0;i<N;i++){
            sumo+=nums[i];

        }
        return sum-sumo;
    }
};