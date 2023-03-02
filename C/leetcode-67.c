char* addBinary(char* a, char* b) {
    char* result = (char*) malloc(128);
    int i = 0;
    int aIndex = strlen(a) - 1;
    int bIndex = strlen(b) - 1;
    int carry = 0;
    int sum;

    while (aIndex >= 0 || bIndex >= 0) {
        sum = carry;
        if (aIndex >= 0) {
            sum += a[aIndex] - '0';
            aIndex--;
        }
        if (bIndex >= 0) {
            sum += b[bIndex] - '0';
            bIndex--;
        }
        carry = sum > 1 ? 1 : 0;
        result[i] = sum % 2 + '0';
        i++;
    }

    if (carry) {
        result[i] = carry + '0';
        i++;
    }
    result[i] = '\0';

    int len = strlen(result);
    for (int j = 0; j < len / 2; j++) {
        char temp = result[j];
        result[j] = result[len - j - 1];
        result[len - j - 1] = temp;
    }

    return result;
}