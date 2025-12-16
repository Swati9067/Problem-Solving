class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
      vector<vector<int>> ans;
      set<vector<int>> st;
      int i,k,j;
      i=j=k=0;
      sort(nums.begin(),nums.end());
      while(i<nums.size()-2){
          j = i+1;
          k = nums.size()-1;
          while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum > 0) {
                int x = nums[k];
                while(k>0 && x==nums[k])
                k--;
            }
            else if(sum < 0){ 
                int x = nums[j];
                while(j<nums.size() && x==nums[j])
                j++;
            }
            else{
                st.insert({nums[i],nums[j],nums[k]});
                int x =nums[j];
                 while(j<nums.size() && x==nums[j])
                 j++;
                 x = nums[k];
                 while(k>0 && x==nums[k])
                 k--;
            }
          }
          i++;
      }
      for(auto it:st){
        ans.push_back(it);
      }
      return ans;



















       /* vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i =0; i<nums.size()-2; i++)
        {
            int j = i+1;
            int k = nums.size()-1;
            long sum =0;
            while(j<k){
                
                sum= nums[i]+nums[j]+nums[k];
                if(sum == 0)
                {   vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    st.insert(temp);
                 j++;
                 k--;
                }

                else if (sum <0) k++;
                else j++;
            }
        }
         for( auto x: st){
            ans.push_back(x);
        }
        return ans;*/


        /*vector<vector<int>> ans;
        set <vector<int>> st;
        for(int i =0; i<nums.size()-2; i++){
            for(int j =i+1; j<nums.size()-1; j++){
                for(int k =j+1;k<nums.size(); k++ ){

                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        for( auto x: st){
            ans.push_back(x);
        }
        return ans;*/
    }
};