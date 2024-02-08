//121.Best time to Buy and sell stock

class Solution {
    public int maxProfit(int[] prices) {
        int min=prices[0] ,maxProfit=0, n = prices.length;
        for(int i=0;i<n;i++){
            int cost = prices[i] - min;
            maxProfit = Math.max(maxProfit, cost);
            min = Math.min(min, prices[i]);
        }
        return maxProfit;
    }
}
