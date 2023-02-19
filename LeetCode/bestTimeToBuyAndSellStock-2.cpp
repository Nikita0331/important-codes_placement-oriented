class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int nst=0;
        int onest=-prices[0];
        
        for(int i=0;i<prices.size();i++)
        {
            nst=max(nst,onest+prices[i]);
            onest=max(onest,nst-prices[i]);
        }
        return nst;
    }
};
