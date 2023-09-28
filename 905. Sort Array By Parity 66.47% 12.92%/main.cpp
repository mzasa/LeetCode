#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        f(0, nums.size())
            if (nums[i] % 2 == 0)
                ans.push_back(nums[i]);

        f(0,nums.size())
            if (nums[i] % 2 == 1)
                ans.push_back(nums[i]);

        return ans;
    }
};