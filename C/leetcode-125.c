#include <ctype.h>

int isPalindrome(char* s) {
    int i = 0;
    int j = strlen(s) - 1;

    while (j > i) {
        while (!isalnum(s[i]) && j > i) {i++;}
        while (!isalnum(s[j]) && j > i) {j--;}
        s[i] = toupper(s[i]);
        s[j] = toupper(s[j]);

        if (s[i] != s[j]) {return 0;}
        j--;
        i++;
    }
    
    return 1;
}