#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        f(0, s.length()) {
            string word = "";
            while (s[i] != ' ' && s[i] != '\0') {
                word += s[i];
                ++i;
            }
            reverse(word.begin(), word.end());
            
            ans += word;
            if (s[i] != '\0')
                ans += " ";
        }

        return ans;
    }
};