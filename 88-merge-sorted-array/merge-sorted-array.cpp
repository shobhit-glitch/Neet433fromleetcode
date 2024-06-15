class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       // THE BASIC APPROACH
    //    for(int i=0;i<n;i++){
    //     nums1[m+i]=(nums2[i]);
    //    }
       
    //    sort(nums1.begin(),nums1.end());
    // SWAP METHOD
    // int i=m-1;
    
    // int j=0;
    

    // while(i>=0 && j<n){
    //     if(nums1[i]>nums2[j]){
    //         swap(nums1[i],nums2[j]);
    //         cout<<"swapped nums1 :"<<nums1[i];
    //         i--;j++;
    //     }
    //     else{
    //         break;
    //     }
        
    // }
    // for(int k=0;k<nums1.size();k++){
    //     cout<<nums1[k]<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     nums1[m+i]=nums2[i];
    // }
    // sort(nums1.begin(),nums1.end());
    //2 pointer 
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            k--;i--;

        }
        else{
            nums1[k]=nums2[j];
            k--;j--;
        }
    }
      
    
    }
};