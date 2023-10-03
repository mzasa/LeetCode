#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a[101], ma = 0, number_of_pair[105], t_pair = 1, ans = 0;
        f(0, 101)
            a[i] = 0;

        f(0, nums.size())
            ++a[nums[i]];

        f(0, 101)
            if (a[i] > ma)
                ma = a[i];

        number_of_pair[0] = 0;
        f(2, ma + 1) {
            number_of_pair[i] = t_pair;
            t_pair += i;
        }

        f(0, 101) 
            ans += number_of_pair[a[i]];

        return ans;
    }
};