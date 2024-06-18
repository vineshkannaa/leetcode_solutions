#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit,vector<int>& worker) {
        vector<pair<int, int>> jobs;
        int n = difficulty.size();
        for (int i = 0; i < n; ++i) {
            jobs.push_back({difficulty[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());

        int totalProfit = 0, maxProfit = 0, j = 0;
        for (int i = 0; i < worker.size(); ++i) {
            while (j < n && worker[i] >= jobs[j].first) {
                maxProfit = max(maxProfit, jobs[j].second);
                ++j;
            }
            totalProfit += maxProfit;
        }

        return totalProfit;
    }
};