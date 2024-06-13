class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int sell=1;
      int buy=0;
      int maxn=0;
      while(sell<n){
        if(prices[buy]<prices[sell]){
            maxn=max(maxn,prices[sell]-prices[buy]);

        }
        if(prices[sell]-prices[buy]<0){
            buy=sell;
        }
        sell++;
      }  
      return maxn;

    }
};