package Java;

class Solution {
    public boolean isPalindrome(int x) {
        char[] chars = ("" + x).toCharArray();
        for (int i = 0; i < chars.length/2; i++) {
            if (chars[i] != chars[chars.length-1-i]) {
                return false;
            }
        }
        return true;
    }
}