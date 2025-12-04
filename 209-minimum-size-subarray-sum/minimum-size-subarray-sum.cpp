class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len = INT_MAX;
        int sum = 0;
        int i =0, j = 0;

        while(j< nums.size()){
            sum += nums[j];
            if(sum >= target){
                min_len = min(min_len, j-i+1);
                while(sum >= target){
                    sum -= nums[i];
                    min_len = min(min_len, j-i+1);
                    i++;
                }
            }
            j++;
        }
        
        return min_len == INT_MAX ? 0 : min_len;
        
    }
};