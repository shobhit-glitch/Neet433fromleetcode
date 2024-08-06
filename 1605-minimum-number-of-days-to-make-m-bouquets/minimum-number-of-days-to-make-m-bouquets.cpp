class Solution {
public:
bool func(int val,vector<int>& bloomDay,int m,int k){
    int cnt=0;
    int numb=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=val){
            cnt++;
        }
        else{
            numb+=(cnt/k);
            cnt=0;
        }
        
    }
    numb+=(cnt/k);
    if(numb>=m){
        return true;
    }
    return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int n=bloomDay.size();
        if (val > n) return -1;
        int l=INT_MAX;
        int r=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            if(r<bloomDay[i]){
                r=max(r,bloomDay[i]);
            }
            if(l>bloomDay[i]){
                l=min(l,bloomDay[i]);
            }
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            // if(func(mid,bloomDay,m,k)){
                
            // }
            if(func(mid,bloomDay,m,k)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            cout<<mid<<" ";
        }

        return l;

    }
};