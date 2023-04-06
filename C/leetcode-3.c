#include <stdlib.h>

int lengthOfLongestSubstring(char* s) {
    int letters[128] = {0};
    int max = 0;
    char *start = s, *end = s;

    while (*end) {
        if (letters[*end]) {
            if (max < end-start) max = end-start;
            while (*start != *end) {
                letters[*start] = 0;
                start++;
            }
            start++;
            end++;
        } else {
            letters[*end] = 1;
            end++;
        }
    }

    return (max < end-start) ? end-start : max;
}