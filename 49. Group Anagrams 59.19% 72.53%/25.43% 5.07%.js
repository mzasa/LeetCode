var groupAnagrams = function(strs) {
    var sortedArray = [], ans = [], index = Array.from({length: strs.length}, (_, index) => index)

    for (let i of strs){
        const sortedString = i.split('').sort().join('')
        sortedArray.push(sortedString)
    }

    const zipped = sortedArray.map((str, index) => ({value: str, index}))
    zipped.sort((a,b) => a.value.localeCompare(b.value))
    const indexArray = zipped.map(item => item.index)
    const strArray = zipped.map(item => item.value)

    for (let i = 0; i < strArray.length; ++i){
        var tempArr = []
        while(i < strArray.length){
            tempArr.push(strs[indexArray[i]])
            if(strArray[i] != strArray[i + 1])
                break
            ++i
        }
        ans.push(tempArr)
    }

    return ans
};