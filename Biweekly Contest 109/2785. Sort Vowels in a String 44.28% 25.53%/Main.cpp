#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;

// AEIOU

class Solution {
public:
    string sortVowels(string s) {
        vector<char> a, b;
        int index = 0;
        string ans = "";
        f(0, s.length()) {
            if (s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'I' && s[i] != 'i' && s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] != 'u')
                a.push_back(s[i]);
            else {
                a.push_back('-');
                b.push_back(s[i]);
            }
        }

        sort(b.begin(), b.end());
        f(0, a.size()) {
            if (a[i] != '-')
                ans += a[i];
            else {
                ans += b[index];
                ++index;
            }
        }

        return ans;

    }
};