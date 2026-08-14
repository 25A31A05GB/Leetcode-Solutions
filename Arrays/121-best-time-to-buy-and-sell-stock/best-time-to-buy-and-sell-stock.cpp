class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            // Update the minimum buying price
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // Calculate profit if we sell at today's price
            int profit = prices[i] - minPrice;
            // Update maximum profit
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        return maxProfit; // Return the best profit
    }
};