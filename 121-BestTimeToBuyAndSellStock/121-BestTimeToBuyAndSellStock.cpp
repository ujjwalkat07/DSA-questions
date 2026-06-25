// Last updated: 6/25/2026, 7:39:16 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minValue = prices[0];
        int n=prices.size();
        int maxProfit = 0;

        for(int i =1;i<n;i++){
            int cost = prices[i]-minValue;
            maxProfit = max(maxProfit,cost);
            minValue=min(minValue,prices[i]);
        }
    return maxProfit;
    }
};