int numberOfSteps(int num) {
    int count = 0;
    while (num) {
        num = (num % 2)? num-1 : num/2;
        count++;
    }
    return count;
}