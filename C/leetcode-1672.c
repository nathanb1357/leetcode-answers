int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max = 0;
    int temp;
    for (int i = 0; i < accountsSize; i++) {
        temp = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            temp += accounts[i][j];
        }
        max = (temp > max)? temp:max;
    }
    return max;
}