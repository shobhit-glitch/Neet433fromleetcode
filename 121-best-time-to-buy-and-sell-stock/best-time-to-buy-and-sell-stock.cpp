class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int prof=INT_MIN;
        int minbuy=prices[0];
        for(int i=0;i<n;i++){
            prof=max(prof,prices[i]-minbuy);
            minbuy=min(minbuy,prices[i]);
        }
        return prof;
    }
};