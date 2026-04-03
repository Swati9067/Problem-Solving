class Solution {
public:
    int countSubstrings(string s) {
        int cnt = 0;
        for(int i =0; i<s.size(); i++){
            int left = i;
            int right = i;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                cnt++;
                left--;
                right++;
            }
        }

        for(int i =0; i<s.size()-1; i++){
            int left = i;
            int right = i+1;

            while(left>=0 && right<s.size() && s[left]==s[right]){
                cnt++;
                left--;
                right++;
            }

        }

        return cnt;
        
    }
};