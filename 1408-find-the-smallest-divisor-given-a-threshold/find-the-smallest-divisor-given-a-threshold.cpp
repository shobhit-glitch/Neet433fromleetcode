class Solution {
public:
bool func(int val,vector<int>& nums, int threshold){
    int tot=0;
    for(int i=0;i<nums.size();i++){
        tot+=ceil((double)nums[i]/(double)val);
    }
    if(tot<=threshold){
        return true;
    }
    return false;

}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int l=1;
        int r=INT_MIN;
        for(int i=0;i<n;i++){
            //l=min(l,nums[i]);
            r=max(r,nums[i]);
        }
        if(n>threshold){
            return -1;
        }
        //int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if(func(mid,nums,threshold)){
                //ans=nums[mid];
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};