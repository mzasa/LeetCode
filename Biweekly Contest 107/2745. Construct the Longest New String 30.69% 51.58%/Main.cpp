class Solution {
public:
    int longestString(int x, int y, int z) {
        if (x > y)
            return y * 4 + 2 + z * 2;
        if(y>x)
            return x * 4 + 2 + z * 2;
        return x * 4 + z * 2;
    }
};