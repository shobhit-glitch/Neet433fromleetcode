class Solution {
public:
    double myPow(double x, int n) {
        int m=abs(n);
        double ans=1;
        while(m>0){
            if(m%2==0){
                x=x*x;
                m=m/2;
            }
            else{
                ans=ans*x;
                m=m-1;
            }
        }
        if(n<0){
            ans=1/ans;

        }
        return ans;
    }
};