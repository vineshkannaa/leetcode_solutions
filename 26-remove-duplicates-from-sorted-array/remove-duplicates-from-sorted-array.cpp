class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0) return 0;
        int i = 0;
        int k = 1;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[k] = nums[j];
                k++;
                i = j;
            }
        }
        return k;
    }
};
