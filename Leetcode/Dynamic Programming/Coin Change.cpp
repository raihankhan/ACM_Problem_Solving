class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int mini[amount+1],i,j;
        
        mini[0]=0;          // base solution
        for(i=1;i<=amount;i++)
        {
            mini[i]=amount+1;
            for(j=0;j<coins.size();j++)
            {
                if(coins[j]<=i and mini[i-coins[j]]+1 < mini[i] )
                    mini[i]=mini[i-coins[j]]+1;
            }
        }
        
        if(mini[amount]>amount)
            return -1;
        else return mini[amount];
        
    }
};
