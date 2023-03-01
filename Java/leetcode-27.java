package Java;

class Solution {
    public int removeElement(int[] nums, int val) {
        int newIndex = 0;
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            while (newIndex < nums.length && nums[newIndex] == val) {
                newIndex++;
                count++;
            }
            if (newIndex < nums.length) {
                nums[i] = nums[newIndex];
                newIndex++;
            } else {
                return nums.length - count;
            }
        }
        return nums.length - count;
    }
}
