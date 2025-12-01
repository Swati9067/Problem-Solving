class Solution {
public:
    bool checkValidString(string s) {
        stack <int> st;
        stack <int> b;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                b.push(i);
            }

            else if(s[i]=='*'){
                st.push(i);
            }

            else if(s[i]==')'){
                if(b.size()>0) b.pop();
                else if(st.size()>0) st.pop();
                else return 0;
            }
        }

        while(b.size()){
            if(st.size()==0) return false;
            else if(st.top()>b.top()){
                st.pop();
                b.pop();
            }
            else return 0;
        }
        return 1;
        
    }
};