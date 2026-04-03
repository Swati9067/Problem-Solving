class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 2) return s;

        int max_len = 0;
        string longest_substr = "";
        for(int i =1; i<s.size()-1; i++){
            int l = i-1;
            int r = i+1;

            while((l>=0 && r<s.size()) && (s[l]==s[r])){

                if(max_len < r-l+1){
                max_len = r-l+1;
                longest_substr = s.substr(l, r - l + 1);
                
              }
              l--;
              r++;

            }
            
         }

         //int evenLen = 0;

         for(int i = 0; i<s.size()-1; i++){
             int left = i;
             int right = i+1;
             while((left>=0 && right<s.size()) && (s[left]==s[right])){

                if(max_len < right-left+1){
                max_len = right-left+1;
                longest_substr = s.substr(left, right - left + 1);
                
             }
             left--;
            right ++;
          }
            
             
         }
         if(max_len ==0)
         longest_substr = s.substr(0, 1);

         return longest_substr;
    }
};