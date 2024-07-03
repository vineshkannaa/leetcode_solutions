class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;

        sort(nums.begin(),nums.end());

        int min_diff = 2147483647;
        for (int i = 0; i <= 3; ++i) {
            min_diff = min(min_diff, nums[nums.size() - 4 + i] - nums[i]);
        }
        
        return min_diff;
    }
};