class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       /* 1.sort the array
        2.start iterating over the aray
        3. skip <0 elements, keep a variable min to check the min missing value
        4. Assign it as min*/

        sort(nums.begin(), nums.end());

        int min_check = 1;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]<0) continue;
            if(nums[i]==min_check){
                min_check ++;
            }
        }

        return min_check;
    }
};