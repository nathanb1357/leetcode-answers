#define MAX_INT 2147483647
#define MIN_INT -2147483648

int reverse(int x) {
    long int result = 0;
    while (x) {
        result *= 10;
        result += x%10;
        if (result > MAX_INT || result < MIN_INT) return 0;
        x = x/10;
    }
    return result;
}