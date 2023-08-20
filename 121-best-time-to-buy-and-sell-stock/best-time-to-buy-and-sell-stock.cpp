class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=0,sell=1;
        int maxi=0;
        if(n<=1){
            return 0;
        }
        
            
        // if (n == 2) {
        //     return max(0, prices[sell] - prices[buy]);
        // }
        
        while(sell<n){
           if(prices[buy]<prices[sell]){
               maxi=max(maxi,prices[sell]-prices[buy]);
           }
           else{
               buy=sell;
           }
           sell++;

        }
        return maxi;
    }
};