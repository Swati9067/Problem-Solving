class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> warmerTemp;
        int n = t.size();

        stack<pair<int,int>> st;

        for(int i = t.size()-1; i>=0; i--){
            if(st.size()==0){
                st.push({t[i],i});
                warmerTemp.push_back(0);
            }

            else if (st.top().first>t[i]){
                auto x = st.top();
                warmerTemp.push_back(x.second - i);
                st.push({t[i],i});
            }

            else{
                while(st.size()>0 && st.top().first<=t[i]){
                    st.pop();
                }
                if(st.size()==0) {
                    warmerTemp.push_back(0);
                    st.push({t[i],i});
                }
                else{
                    warmerTemp.push_back(st.top().second - i);
                    st.push({t[i],i});
                }
            }
        }

        reverse(warmerTemp.begin(), warmerTemp.end());
        return warmerTemp;
    }
};