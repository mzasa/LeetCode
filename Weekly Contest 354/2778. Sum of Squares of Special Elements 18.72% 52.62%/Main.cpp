#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        f(0, nums.size()) 
            if (nums.size() % (i + 1) == 0)
                ans += nums[i] * nums[i];
        return ans;
    }
};