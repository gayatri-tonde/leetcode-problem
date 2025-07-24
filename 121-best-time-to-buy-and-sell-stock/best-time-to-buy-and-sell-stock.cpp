class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        int bestBuy[100000];
        bestBuy[0] = INT_MAX;
        for (int i = 1; i < prices.size(); i++) {
            bestBuy[i] = min(prices[i - 1], bestBuy[i - 1]);
        }
        for (int i = 0; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - bestBuy[i]);
        }
        return maxProfit;
    }
};