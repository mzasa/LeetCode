#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        map<int, int> a, new_arr;
        int dominant, ans = -1;
        f(0, nums.size())
            ++a[nums[i]];

        for (auto i = a.begin(); i != a.end(); ++i) {
            if (i->second * 2 > nums.size()) {
                dominant = i->first;
                break;
            }
        }
        
        f(0, nums.size()) {
            --a[nums[i]];
            ++new_arr[nums[i]];
            if (a[dominant] * 2 > nums.size() - i - 1 && new_arr[dominant] * 2 > i + 1) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};