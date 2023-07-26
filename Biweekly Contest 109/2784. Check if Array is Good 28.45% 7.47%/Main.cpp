#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size() == 1)
            return false;
        
        map<int, int>a;
        int b = 1;
        f(0, nums.size())
            ++a[nums[i]];

        for (auto i = a.begin(); i != a.end(); ++i) {
            if (b != nums.size() - 1) {
                if (a[b] != 1)
                    return false;
            }
            if (b == nums.size() - 1) 
                if (a[b] != 2)
                    return false;
            ++b;
        }
        return true;
    }
};