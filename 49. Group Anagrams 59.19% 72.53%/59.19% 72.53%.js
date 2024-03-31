var groupAnagrams = function(strs) {
    var sortedArray = [], ans = []
    var myMap = new Map()

    for (let i of strs){
        const sortedString = i.split('').sort().join('')
        if (!myMap.has(sortedString)) 
            myMap.set(sortedString, [i])
        else 
            myMap.get(sortedString).push(i)
    }

    for(let [key, value] of myMap)
        ans.push(value)

    return ans
};