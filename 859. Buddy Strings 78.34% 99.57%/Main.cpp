class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())
            return 0;
        if (s == goal) {
            set<char> t(s.begin(), s.end());
            return t.size() < goal.size();
        }

        int i = 0, j = s.size() - 1;
        while (s[i] == goal[i])
            ++i;
        while (s[j] == goal[j])
            --j;
        
        if (i == j)
            return 0;
        
        swap(s[i],s[j]);
        return s == goal;
    }
};