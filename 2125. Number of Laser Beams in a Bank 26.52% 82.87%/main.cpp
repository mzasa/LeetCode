#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, previous_devices = -1;
        f(0, bank.size()) {
            int devices = 0;
            f1(0, bank[i].length())
                devices += bank[i][j] - '0';
            
            if (devices != 0) {
                if (previous_devices == -1)
                    previous_devices = devices;
                else {
                    ans += previous_devices * devices;
                    previous_devices = devices;
                }
            }
        }

        return ans;
    }
};