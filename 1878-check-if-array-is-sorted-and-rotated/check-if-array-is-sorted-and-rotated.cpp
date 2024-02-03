class Solution {
public:
    public:
    bool check(vector<int>& nums) {
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());

        for (int i = 0; i < nums.size(); i++) {
            rotate(nums.begin(), nums.begin() + 1, nums.end());
            if (copy == nums) {
                return true;
            }
        }
        return false;
    }
};
