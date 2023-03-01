
int maxProfit(int* prices, int pricesSize) {
    int buy = 0, sell = 1;
    int profit = 0, maxProfit = 0;
    while (sell < pricesSize) {
        if (prices[buy] < prices[sell]) {
            profit = prices[sell] - prices[buy];
            if (profit > maxProfit) {maxProfit = profit;}
        } else {buy = sell;}
        sell++;
    }
    return maxProfit;
}
