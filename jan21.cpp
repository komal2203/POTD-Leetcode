class Solution
{
public:
    long long gridGame(vector<vector<int>> &grid)
    {
        int n = grid[0].size();
        long long firstRowSum = accumulate(grid[0].begin(), grid[0].end(), 0LL);
        long long secondRowSum = 0;

        long long miniSum = LLONG_MAX;

        for (int turnIndex = 0; turnIndex < n; turnIndex++)
        {
            firstRowSum -= grid[0][turnIndex];
            miniSum = min(miniSum, max(firstRowSum, secondRowSum));
            secondRowSum += grid[1][turnIndex];
        }
        return miniSum;
    }
};