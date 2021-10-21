// question link: https://leetcode.com/problems/coin-change/
#include <bits/stdc++.h>
using namespace std; 
 
int ans(vector<int>& coins,vector<vector<int>> &dp,int i,int amount)
{
        if(amount==0)
            return 0;
        
        if(amount<0 || i<0)
            return 1e8;
        
        if(dp[i][amount]!=-1)
            return dp[i][amount];
        
        if(amount<coins[i])
         return   dp[i][amount]=ans(coins,dp,i-1,amount);
        
        return dp[i][amount]=min(1+ans(coins,dp,i,amount-coins[i]),
                                 ans(coins,dp,i-1,amount));
        
            
}

int coinChange(vector<int>& coins, int amount) 
{
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=amount;j++)
                dp[i][j]=-1;
        }
        int v=ans(coins,dp,n-1,amount);
        return (v==1e8)?-1:v;
}

int main()
{
      int n;
      cin>>n;

      vector<int> coins(n);
      for(int i=0;i<n;i++)
      cin>>coins[i];

      int amount;
      cin>>amount;

      cout<<coinChange(coins,amount);

      return 0;
}  