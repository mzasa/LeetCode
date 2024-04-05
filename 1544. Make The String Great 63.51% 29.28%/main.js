var makeGood = function(s) {
    for (let i = 0; i < s.length - 1; ++i){
        if(Math.abs(s[i].charCodeAt() - s[i + 1].charCodeAt()) === 32){
            s = s.slice(0, i) + s.slice(i + 2)
            i = i - 2;
            if(i < 0)
                i = -1
        }
    }

    return s
};