int findDuplicate(int* nums, int numsSize){
    int bitlength = log2(numsSize) + 1;
    int ans = 0;

    for (int j = 0; j < bitlength; j++) {
        int mask = 1 << j;
        int count = 0;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] & mask) {
                count += 1;
            }
            if (i & mask) {
                count -= 1;
            }
        }
        if (count > 0) {
            ans |= mask;
        }
    }
    return ans;
}