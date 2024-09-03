class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i=0;
        int j=i+k;
        int maxs=0;
        int n=cardPoints.size();
        int lsum=0,rsum=0;
        for(i=0;i<k;i++){
            lsum+=cardPoints[i];
        }
        cout<<lsum;
        maxs=lsum;
        int ridx=n-1;
        for(i=k-1;i>=0;i--){
            lsum-=cardPoints[i];
            rsum+=cardPoints[ridx];
            //cout<<"lsum"<<lsum<<" ";
            //cout<<rsum<<" ";
            ridx--;
            //cout<<ridx<<" ";
            maxs=max(maxs,lsum+rsum);
        }
        return maxs;
    }
};