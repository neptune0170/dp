#include<bits/stdc++.h>
using namespace std;
int getcount(int coins[],int n, int sum)
{
    if(sum==0)return 1;
    if(n==0)return 0;
    //do not include 
    int res=getcount(coins,n-1,sum);
    //include
    if(coins[n-1]<=sum)
    {   //here n is not subtracted because quanty of n is unlimited
        res=res+getcount(coins,n,sum-coins[n-1]);
    }

   return res; 

}
int main()
{
    int sum=10;
    int n=4;
    int coins[n]={2,5,3,6};
    cout<<getcount(coins,n,sum);

}