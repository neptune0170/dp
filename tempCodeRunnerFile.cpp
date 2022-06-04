//coin change Problem (count Combinations)
 #include<bits/stdc++.h>
 using namespace std;
 int getcount(int coin[],int n, int sum )
 {
     if(sum==0)return 1;
     if(n==0)return 0;
     int res = getcount(coin,n-1,sum);
     if(coin[n-1]<=sum)
     {
         res=res+getcount(coin,n,sum-coin[n-1]);
     }
     return res;
 }
 int main()
 {
     int coin[]={1,2} ;
     int sum =4;
     int m=getcount(coin,2,sum);
     cout<<m;

 }