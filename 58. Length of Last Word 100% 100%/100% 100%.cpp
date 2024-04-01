class Solution {
public:
	int lengthOfLastWord(string s) {
		int index = s.length() - 1, ans = 0;
		while (index >=0 && s[index] == ' ' ) 
			--index;
		while (index >= 0 && s[index] != ' ' ) {
			++ans;
			--index;
		}
		return ans;
	}
};