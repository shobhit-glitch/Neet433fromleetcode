class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        // 2 POINTER APPROACH  O(N)
        int i=1;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[j-1]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }

    
};