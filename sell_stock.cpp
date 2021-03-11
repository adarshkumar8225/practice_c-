//Problem Link--->> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

    int maxProfit(vector<int>& prices) 
    {
        int min_price=INT_MAX;
        int max_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            //till ith index find the min price and subtract it in current price
            if(min_price>prices[i]) min_price=prices[i];
            else if(max_profit<prices[i]-min_price) max_profit=prices[i]-min_price;   
        }
        return max_profit;
    }
