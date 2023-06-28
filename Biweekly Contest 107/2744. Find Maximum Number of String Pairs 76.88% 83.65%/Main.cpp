#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        f(0, words.size()) {
            f1(i + 1, words.size()) {
                if (words[i][0] == words[j][1] && words[i][1] == words[j][0])
                    ++ans;
            }
        }
        return ans;
    }
};