#define f(a,b) for(int i=a;i<b;++i)
#define ft(a,b) for(int z=a;z<b;++z)
#define f1(a,b) for(int j=a;j<b;++j)
#define f2(a,b) for(int k=a;k<b;++k)
typedef long long ll;
typedef double db;


class Solution {
public:
    int totalMoney(int n) {
        int total_money = 0;
        f(0, n / 7) 
            total_money += 28 + i * 7;
        f(0, n % 7)
            total_money += i + n / 7 + 1;
        return total_money;
    }
};