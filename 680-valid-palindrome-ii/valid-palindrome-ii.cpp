class Solution {
public:
   /* bool validPalindrome(string s) {
        int i = 0; 
        int j = s.size()-1;
        int flag = 0;
        while(i<j){
            if(s[i]==s[j]) {
                i++; j--;}

            else if(flag ==0) {
                if(i+1<j && s[i+1] ==  s[j]){
                    //i+2;
                    i += 2;
                    j--;
                    flag = 1;
                }

                else if (j-1> i && s[i] == s[j-1])  { 
                    j -= 2; 
                    i++;
                    flag = 1;
                }

                else return false;
            }

            else return false;

        }

        return true;



    }*/

    bool ispalindrome(string s, int i, int j){
        while(i < j){
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i  = 0;
        int j = s.size()-1;
        while(i < j){
            if(s.at(i) == s.at(j)){
                i++;
                j--;
            }else{
                return ispalindrome(s, i+1, j) || ispalindrome(s, i, j-1);
            }
        }
        return true;
    }
};