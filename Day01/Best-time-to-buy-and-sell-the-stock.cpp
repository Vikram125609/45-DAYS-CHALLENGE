class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit = 0;
        int diff;
        bool flag = false;
        for(int i=0;i<prices.size();i++)
        {
            mini = min(mini,prices[i]);
            diff = prices[i] - mini;
            profit = max(profit,diff);
        }
        return profit;
    }
};