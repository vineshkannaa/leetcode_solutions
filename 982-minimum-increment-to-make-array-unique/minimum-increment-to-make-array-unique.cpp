class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int moves = 0;
        if (nums.empty()) return moves;

        sort(nums.begin(), nums.end());

        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                int newNum = nums[i - 1] + 1;
                moves += newNum - nums[i];
                nums[i] = newNum;
            }
        }

        return moves;
    }
};