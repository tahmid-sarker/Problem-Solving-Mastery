class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int size = accounts.size();
        for (int i = 0; i < size; i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            wealth = max(wealth, sum);
        }
        return wealth;
    }
};