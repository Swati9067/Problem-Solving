class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = nums.size();
        int n = nums.size();
        int l = 0;
        int h = nums.size()-1;

        while(l<=h){
            int mid = (l+h)/2;
            
             if(nums[mid]<target){
                l = mid +1;
            }
            else{
                ans = mid;
                h = mid -1;
            }
        }


        return ans;
    }
};