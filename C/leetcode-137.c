int singleNumber(int* nums, int numsSize) {
    int once = 0, twice = 0;
    for (int i = 0; i < numsSize; i++) {
        once = once^nums[i] & ~twice;
        twice = twice^nums[i] & ~once;
    }
    return once;
}