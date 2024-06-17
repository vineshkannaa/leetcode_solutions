#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return searchInsertRecursive(nums, target, 0, nums.size() - 1);
    }

private:
    int searchInsertRecursive(vector<int>& nums, int target, int low, int high) {
        if (low > high) {
            // If low exceeds high, insert at high + 1 (which is low)
            return low;
        }
        
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            return searchInsertRecursive(nums, target, mid + 1, high);
        } else {
            return searchInsertRecursive(nums, target, low, mid - 1);
        }
    }
};
