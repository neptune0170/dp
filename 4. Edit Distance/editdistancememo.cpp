#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int memo[1000][1000];
int ed(string s1,string s2,int m,int n){

   if(memo[m][n]==-1)
   {
        if(m==0)
        {
            return memo[m][n]= n;
        }
        if(n==0)
        {
            return memo[m][n]=m;
        }
        if(s1[m-1]==s2[n-1])
        {   //if last element is same we remove both element
            return memo[m][n]= ed(s1,s2,m-1,n-1);
        }
        else{
        return memo[m][n]=1+min(
            ed(s1,s2,m-1,n), //delete element in s1S
            min(ed(s1,s2,m,n-1) //insert element in s1
            ,ed(s1,s2,m-1,n-1)) //replace element in s1
            );
        }
   }
   return memo[m][n];

}
int main()
{
    string s1="CAT";
    int m=s1.length();
    string s2="CUT";
    int n=s2.length();
    memset(memo,-1,sizeof(memo));
    cout<<ed(s1,s2,m,n);
}