class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //the basic approach
    //   int n=prices.size();
    //   int sell=1;
    //   int buy=0;
    //   int maxn=0;
    //   while(sell<n){
    //     if(prices[buy]<prices[sell]){
    //         maxn=max(maxn,prices[sell]-prices[buy]);

    //     }
    //     if(prices[sell]-prices[buy]<0){
    //         buy=sell;
    //     }
    //     sell++;
    //   }  
    //   return maxn;
    int n=prices.size();
    int buy=prices[0];
    int prof=0;
    for(int i=0;i<n;i++){
        prof=max(prof,prices[i]-buy);
        buy=min(buy,prices[i]);
    }
    return prof;
    }
};