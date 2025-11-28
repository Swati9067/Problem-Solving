class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        
        while (l < h) {
            int mid = l + (h - l) / 2;

            // If mid element is greater than last, min is on the right
            if (nums[mid] > nums[h]) {
                l = mid + 1;
            }
            else {
                h = mid;   // min is at mid or left side
            }
        }

        return nums[l];
    }
};