#include <stdlib.h>

int checkValidString(char* s) {
    int open = 0;
    int close = 0;
    int stars = 0;
    int i;
    for (i = 0; s[i]; i++) {
        if (s[i] == '(')
            open++;
        else if (s[i] == ')')
            close++;
        else if (s[i] == '*')
            stars++;
        if (close > open + stars)
            return 0;
    }

    open = 0;
    close = 0;
    stars = 0;
    for (int j = --i; j >= 0; j--) {
        if (s[j] == '(')
            close++;
        else if (s[j] == ')')
            open++;
        else if (s[j] == '*')
            stars++;
        if (close > open + stars)
            return 0;
    }

    return 1;
}