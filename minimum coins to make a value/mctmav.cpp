#include<bits/stdc++.h>
using namespace std;
int getMin(int coins[],int n,int val)
{   if(val==0)return 0;
    int res=INT_MAX;
   for(int i=0;i<n;i++)
   {
    if(coins[i]<=val)
    {
        int sub_res=getMin(coins,n,val-coins[i]);
        if(sub_res!=INT_MAX)
        {
            res=min(res,sub_res+1);
        }
    }
   }
   return res;
}
int main()
{
    int val=30;
    int n=3;
    int coins[n]={25,10,5};
    cout<<getMin(coins,n,val);
}