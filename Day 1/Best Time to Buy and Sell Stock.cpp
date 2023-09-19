// Question Link:- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxProfit=0;
    int minSoFar=prices[0];
    
    for(int i=0; i<prices.size(); i++){
        minSoFar=min(minSoFar,prices[i]);
        int profit=prices[i]-minSoFar;
        maxProfit=max(maxProfit,profit);
    }
    return maxProfit;
    }
};


// Refer the article for intuition and T.C: https://takeuforward.org/data-structure/stock-buy-and-sell/
