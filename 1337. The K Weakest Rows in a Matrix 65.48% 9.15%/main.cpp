#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> a(105);
        vector<int> ans;

        f(0, mat.size()) {
            int soldier = 0;
            f1(0, mat[i].size()) 
                if (mat[i][j] == 1)
                    ++soldier;
            a[soldier].push_back(i);
        }

        f(0, a.size()) {
            if (!a[i].empty()) {
                f1(0, a[i].size()) {
                    ans.push_back(a[i][j]);
                    --k;
                    if (k == 0)
                        return ans;
                }
            }
        }

        return ans;
    }
};