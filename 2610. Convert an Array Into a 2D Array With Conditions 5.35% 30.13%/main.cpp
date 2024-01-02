#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;

int a[205];

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        int row_number = 0;

        f(0, nums.size())
            ++a[nums[i]];

        f(0, 201)
            if (a[i] > row_number)
                row_number = a[i];


        f(0, row_number) {
            vector<int> temp;
            f(0, 201) {
                if (a[i] > 0) {
                    temp.push_back(i);
                    --a[i];
                }
            }
            ans.push_back(temp);
        }

        return ans;
    }
};