#include<iostream>
#include<string>
using namespace std;
// int memo[1000][1000];
int lcs(string & s1,string& s2,int n,int m)
{
  if(m==0 || n==0)
  {
    return n;
  }
  // if last element are same
  if(s1[m-1]==s2[n-1])
  {
    return 1+lcs(s1,s2,m-1,n-1);
  }
  //if last element are not equal
  else{
    //taking maximum 
    return  max(
     //remove end element from 1st string 
    lcs(s1,s2,m-1,n),
     //remove end element from 2nd string
    lcs(s1,s2,m,n-1));

  } 

}

int main()
{
string s1="AXYZ", s2="BAZ";
	
	int n = 4, m = 3;
	
	// memset(memo,-1,sizeof(memo));
	
 int ans= lcs(s1,s2,n,m);
 cout<<ans;
}