#include<bits/stdc++.h>
using namespace std;
int memo[10000][10000];
int lcs(string s1,string s2, int m,int n)
{
    if(memo[m][n]==-1)
    {
        int res;
        if(m==0|| n==0)
        {
            return memo[m][n]= 0;
        }
        if(s1[m-1]==s2[n-1])
        {
            return  memo[m][n]=1+lcs(s1,s2,m-1,n-1);
        }
        else{
            return memo[m][n]=max(
                //remove last element of s1
                lcs(s1,s2,m-1,n),
                //remove last element of s2
                lcs(s1,s2,m,n-1)
            );
        } 

    }
    return memo[m][n];
   
}
int main()
{
    string s1="AGGTAB";
    string s2="GXTXAYB";
    memset(memo,-1,sizeof(memo));
    int m=s1.length();
    int n=s2.length();
    cout<<lcs(s1,s2,m,n);

}