class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v;
        vector<int>p;
        vector<int>ne;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                p.push_back(nums[i]);
            }
            else{
                ne.push_back(nums[i]);
            }
        }
        int pos=0;
        int neg=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                v.push_back(p[pos]);
                pos++;
            }
            else{
                v.push_back(ne[neg]);
                neg++;

            }
        }
        return v;
    }
};