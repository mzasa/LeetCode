var getRow = function(rowIndex) {
    if(rowIndex == 0)
        return [1]
    if(rowIndex == 1)
        return [1,1]

    let ans = [1,1]
    for (let i = 0; i < rowIndex - 1; i++) {
        const temp = [1]
        for (let j = 0; j < i + 1; j++)
            temp.push(ans[j] + ans[j + 1])
        temp.push(1)
        ans = temp
    }
    return ans
};