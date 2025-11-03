class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size()!= t.size()) return false;

        unordered_map <char,int> mp;
        int i=0;
        while(i<s.size())
        {
            mp[s[i]]++;
            mp[t[i]]--;
            i++;
        }

        for(auto i: mp)
        {
            if(i.second>0) return false;
           // i++;
        }

        return true;

         /*sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;*/
        
    }
};