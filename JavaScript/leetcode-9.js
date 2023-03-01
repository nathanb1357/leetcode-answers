let isPalindrome = function(x) {
    let string = String(x);
    for (i = 0; i < string.length/2; i++) {
        if (string[i] != string[string.length-1-i]) {
            return false;
        }
    }
    return true;
};