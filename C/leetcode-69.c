int mySqrt(int x) {
    if (x <= 1) return x;
    int min = 0;
    int max = x;
    int mid;
    while (min <= max) {
        mid = (max+min)/2;
        if ((long)mid*mid == x) {
            return mid;
        } else if ((long)mid*mid > x) {
            max = mid-1;
        } else {
            min = mid+1;
        }
    }
    if (mid*mid > x) mid--;
    return mid;
}