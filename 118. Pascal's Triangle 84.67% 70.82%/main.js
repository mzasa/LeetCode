var triangularSum = function(nums) {
    for (let i = 0; i < nums.length - 1; ++i){
        for (let j = 0; j < nums.length - i - 1; ++j)
            nums[j] = (nums[j] + nums[j + 1]) % 10
        for (let j = 0; j < nums.length; ++j)
            console.log(nums[j])
    }
    return nums[0]
};