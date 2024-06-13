class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int z,o,t;
        z=o=t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
            }
            else if(nums[i]==1){
                o++;
            }
            else{
                t++;
            }

        }
        cout<<z<<" "<<o<<" "<<t;
        for(int i=0;i<nums.size();i++){
            if(z!=0){
                nums[i]=0;
                z=z-1;
            }
            else if(z==0 && o!=0){
                nums[i]=1;
                o=o-1;
            }
            else if(z==0 && o==0 && t!=0){
                nums[i]=2;
                t=t-1;
            }
        }
    }
};