#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int>m;
        vector<int> ans;
        f(0, nums.size())
            ++m[nums[i]];
        for (auto i = m.begin(); i != m.end(); ++i)
            if (i->second > nums.size() / 3)
                ans.push_back(i->first);

        return ans;
    }
};