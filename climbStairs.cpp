class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, 1e9);
        dp[n] = 0; 
        for (int i = n - 1; i >= 0; i--) {
            if (i + 1 <= n) dp[i] = min(dp[i], costs[i] + 1*1 + dp[i + 1]);
            if (i + 2 <= n) dp[i] = min(dp[i], costs[i + 1] + 2*2 + dp[i + 2]);
            if (i + 3 <= n) dp[i] = min(dp[i], costs[i + 2] + 3*3 + dp[i + 3]);
        }
        return dp[0];
    }
};
