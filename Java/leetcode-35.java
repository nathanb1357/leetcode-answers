package Java;

class Solution {
    public int searchInsert(int[] nums, int target) {
        if (nums[0] >= target) {return 0;}
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] == target) {return i;}
            else if (nums[i] < target && nums[i + 1] >= target) {return i + 1;}
        }
        return nums.length;
    }
}
