class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.length() - 1;
        while (i >= 0 && num[i] % 2 == 0)
            --i;
        return num.erase(i + 1, num.length() - 1 - i);
    }
};