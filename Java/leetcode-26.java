package Java;

class Solution {
    public int removeDuplicates(int[] nums) {
        int lastNum = nums[0];
        int newIndex = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != lastNum) {
                lastNum = nums[i];
                newIndex++;
                nums[newIndex] = lastNum;
            }
        }
        return newIndex + 1;
    }
}
