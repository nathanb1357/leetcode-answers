int isPowerOfFour(int n){
    if (n == 1) return 1;
    int i = 1;
    while (i < 31) {
        if (n == 2<<i) return 1;
        i += 2;
    }
    return 0;
}