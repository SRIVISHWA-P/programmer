# Best time to Buy and sell stock


# approach i used which is more time consuming for large inputs
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        n = len(prices)
        if n == 1:
            return 0
        else:
            profit = 0
            for i in range(n - 1):
                temp = prices[i + 1 : n]
                t_profit = max(temp) - prices[i]
                if t_profit > profit:
                    profit = t_profit
        return profit


# approach i learned and executed
class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        n = len(prices)
        if n == 1:
            return 0

        min_price = prices[0]
        max_profit = 0

        for i in range(1, n):
            if prices[i] < min_price:
                min_price = prices[i]
            else:
                profit = prices[i] - min_price
                if profit > max_profit:
                    max_profit = profit

        return max_profit
