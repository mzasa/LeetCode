class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if (sx == fx && sy == fy)
            return t != 1;
        int min_move = -1;
        if (abs(sx - fx) > abs(sy - fy)) 
            min_move = abs(sy - fy) + abs(sx - fx) - abs(sy - fy);
        else
            min_move = abs(sx - fx) + abs(sy - fy) - abs(sx - fx);
        return t >= min_move;
    }
};