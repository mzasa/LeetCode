var lengthOfLastWord = function(s) {
    var index = s.length - 1, ans = 0
    while(index >= 0 && s[index] == ' ')
        --index
    while(index >= 0 && s[index] != ' '){
        --index
        ++ans
    }
    return ans
};