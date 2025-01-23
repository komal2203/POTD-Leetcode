class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int mini = INT_MAX;
        int maxProfit = 0;

        int i = 0;
        while (i + 1 < n && prices[i + 1] < prices[i])
            i++;
        if (i == n - 1)
            return 0;

        mini = prices[i];
        for (int index = i + 1; index < n; index++)
        {
            if (prices[index] < mini)
                mini = prices[index];
            else
                maxProfit = max(maxProfit, prices[index] - mini);
        }
        return maxProfit;
    }
};