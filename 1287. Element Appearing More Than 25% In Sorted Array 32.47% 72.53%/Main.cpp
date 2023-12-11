#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cur_num = arr[0], occurs = 1;
        f(1, arr.size()) {
            if (cur_num == arr[i])
                occurs += 1;
            else {
                if (occurs > (db)arr.size() / 4.0)
                    return cur_num;
                cur_num = arr[i];
                occurs = 1;
            }
        }
        if (occurs > (db)arr.size() / 4.0)
                    return cur_num;
        return -1;
    }
};