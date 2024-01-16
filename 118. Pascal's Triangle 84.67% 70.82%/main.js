var generate = function(numRows) {
    if(numRows == 1)
        return [[1]]
    if(numRows == 2)
        return [[1],[1,1]]

    const ans = [1,1]
    for (let i = 0; i < numRows - 2; i++) {
        const temp = [1]
        for (let j = 0; j < i + 1; j++)
            temp.push(ans[j] + ans[j + 1])
        temp.push(1)
        ans = temp
    }
    return ans
};

