#include<bits/stdc++.h>
using namespace std;
int memo[1000][1000];
int getcount(int coins[],int n, int sum)
{   
    if(memo[sum][n]==-1)
    {
        int res;
        if(sum==0)
        return res=1;
        if(n==0)return res= 0;
        //do not include 
         res=getcount(coins,n-1,sum);
        //include
        if(coins[n-1]<=sum)
        {   //here n is not subtracted because quanty of n is unlimited
            res=res+getcount(coins,n,sum-coins[n-1]);
        }
        memo[sum][n]=res;

         return memo[sum][n];
    }
    return memo[sum][n];

}
int main()
{
    int sum=10;
    int n=4;
    memset(memo,-1,sizeof(memo));
    int coins[n]={2,5,3,6};
    cout<<getcount(coins,n,sum);

}