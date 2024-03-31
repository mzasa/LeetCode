function mapsAreEqual(map1, map2) {
    // Kiểm tra độ dài của hai map
    if (map1.size !== map2.size) {
        return false;
    }
    
    // Kiểm tra từng cặp khóa-giá trị trong map1
    for (let [key, value] of map1) {
        // Kiểm tra xem key có tồn tại trong map2 không
        if (!map2.has(key)) {
            return false;
        }
        // Kiểm tra giá trị của key trong map1 và map2
        if (map2.get(key) !== value) {
            return false;
        }
    }
    
    // Nếu không có sự khác biệt nào, hai map là bằng nhau
    return true;
}



var groupAnagrams = function(strs) {
    var mapArray = [], ans = []

    for (let i of strs){
        const tempMap = new Map()
        for (let j of i)
            tempMap.set(j, (tempMap.get(j) || 0) + 1)

        var mapExist = false
        for (let j = 0; j < mapArray.length; ++j){
            if (mapsAreEqual(tempMap, mapArray[j]) == true){
                ans[j].push(i)
                mapExist = true
                break
            }
        }

        if (mapExist == false){
            mapArray.push(tempMap)
            ans.push([i])
        }
    }

    return ans
};