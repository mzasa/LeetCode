#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


int numOfOne(int a) {
    int ans = 0;
    while (a > 0) {
        ans += a % 2;
        a /= 2;
    }
    return ans;
}

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        f(0, nums.size()) 
            if (numOfOne(i) == k)
                sum += nums[i];
        return sum;
    }
};