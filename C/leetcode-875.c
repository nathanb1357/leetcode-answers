#include <stdlib.h>

int eatHours(int* piles, int pileSize, int mid) {
    int hrs = 0;
    for (int i = 0; i < pileSize; i++) {
        hrs += (piles[i] + mid-1)/mid;
    }
    return hrs;
}

int max(int* piles, int pilesSize) {
    int max = 1;
    for (int i = 0; i < pilesSize; i++) {
        if (max < piles[i]) {
            max = piles[i];
        }
    }
    return max;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int l = 1;
    int r = max(piles, pilesSize);
    int mid;
    while (l < r) {
        mid = (l + r)/2;
        if (eatHours(piles, pilesSize, mid) <= h) {
            r = mid;
        } else {
            l = mid+1;
        }
    }
    return r;
}