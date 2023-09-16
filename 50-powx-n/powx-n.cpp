class Solution {
public:
    double myPow(double x, int n) {
        //**************** [ BRUTE FORCE APPROACH ] ****************
        // double ans=1;
        // int f=abs(n);
        // if(abs(x)==1){
        //     if(x==-1){
        //         return -1;
        //     }
            
        //     return ans;
        // }
        // for(int i=0;i<f;i++){
        //     ans*=x;
        // }
        // if(n<0){
        //     if(n<-10000 && x!=1){
        //         return 0;
        //     }
        //     else{
        //         return 1/ans;
        //     }
        // }
        // return ans;
        //**************** [  OPTIMAL SOLUTION ] ****************
        double ans=1;
        long long f=abs(n);
        while(f>0){
            if(f%2==0){
                x=x*x;
                f=f/2;
            }
            else{
                ans=ans*x;
                f=f-1;

            }
        }
        if(n<0){
            ans=1/ans;
        }
        return ans;

    }
};