package Java;

class Solution {
    public String longestCommonPrefix(String[] strings) {
        String sub = strings[0];
        for (int i = 1; i < strings.length; i++) {
            while (strings[i].indexOf(sub) != 0) {
                sub = sub.substring(0, sub.length()-1);
            }
        }
        return sub;
    }
}
