#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        bool a[105];
        int ans = 0;
        f(0, 105)
            a[i] = 0;
        f(0, nums.size()) 
            f1(nums[i][0], nums[i][1] + 1)
                a[j] = 1;
        f(0, 105)
            ans += a[i];
        return ans;
    }
};