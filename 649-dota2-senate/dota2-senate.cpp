class Solution {
public:
    string predictPartyVictory(string s) {
    deque<int> R;
    deque<int> D;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') R.push_back(i);
        else D.push_back(i);
    }

    while (!R.empty() && !D.empty()) {
        if (R.front() < D.front()) {
            D.pop_front();
            int t = R.front();
            R.pop_front();
            R.push_back(t + s.size());
        } else {
            R.pop_front();
            int t = D.front();
            D.pop_front();
            D.push_back(t + s.size());
        }
    }

    if (R.empty()) return "Dire";
    return "Radiant";
    }
};