#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0, second = 0, i1 = 0;
        f(0,nums.size())
            if (nums[i] > first) {
                first = nums[i];
                i1 = i;
            }
        f(0, nums.size())
            if (nums[i] > second && i != i1) 
                second = nums[i];
        return (first - 1) * (second - 1);
    }
};