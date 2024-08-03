class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        if (n <= 2) return 0;
        vector<int>primes(n,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i<n;i++){
            if(primes[i]){
                cnt++;
                for(int j=i*2;j<n;j=j+i){
                    primes[j]=0;
                }
            }
        }
        return cnt;
    }
};