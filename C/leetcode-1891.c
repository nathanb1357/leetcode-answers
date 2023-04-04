#include <stdio.h>
#include <stdlib.h>

// Obtain k ribbons of the same length
int cutRibbons(int* ribbons, int n, int k) {
    int min = 0;
    int max = n;
    while (min < max) {
        int mid = (min + max) / 2;
        int count = 0;
        for (int i = 0; i < n; i++) {
            count += ribbons[i] / mid;
        }
        if (count < k) {
            max = mid - 1;
        } else {
            min = mid;
        }
    }
}
