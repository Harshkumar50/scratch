class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int result=0;
        int minprice=prices[0];
        for(int i=0;i<n;i++){
        int buy=prices[i];
        result=max(result,buy-minprice);
        minprice=min(minprice,buy);

        }
        return result;
    }
};