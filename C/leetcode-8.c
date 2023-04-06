#define INT_MAX 2147483647
#define INT_MIN -2147483648

int myAtoi(char* s){
    long int sum = 0;
    int factor = 1;
    while (s && isspace(s[0])) {
        s++;
    }

    if (s[0] == '-') {
        factor = -1;
        s++;
    } else if (s[0] == '+') {
        s++;
    }

    for (int i = 0; i < strlen(s); i++) {
        int num = 0;
        if (isdigit(s[i])) {
            sum = sum * 10 + (s[i]-'0');
            if(sum * factor >= INT_MAX) return INT_MAX;
            if(sum * factor <= INT_MIN) return INT_MIN;
        } else {
            return sum * factor;
        }
    }
    return sum * factor;
}