var productExceptSelf = function(nums) {
    var preflix = new Array(nums.length).fill(1), suffix = new Array(nums.length).fill(1)

    for (let i = 1; i < nums.length; ++i)
        preflix[i] = nums[i - 1] * preflix[i - 1]

    for (let i = nums.length - 2; i >= 0; --i)
        suffix[i] = nums[i + 1] * suffix[i + 1]

    for (let i = 0; i < nums.length; ++i)
        preflix[i] = preflix[i] * suffix[i]

    return preflix 
};