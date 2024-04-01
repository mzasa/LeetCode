var topKFrequent = function(nums, k) {
    var myMap = new Map(), ans = []
    
    for (let i of nums)
        myMap.set(i, (myMap.get(i) || 0) + 1)

    const entries = Array.from(myMap.entries())
    entries.sort((a, b) => b[1] - a[1])
    
    for (let i = 0; i < k; ++i)
        ans.push(entries[i][0])

    return ans
};