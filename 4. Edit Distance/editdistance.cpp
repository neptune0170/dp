#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ed(string s1,string s2,int m,int n){
    if(m==0)
    {
        return n;
    }
    if(n==0)
    {
        return m;
    }
    if(s1[m-1]==s2[n-1])
    {   //if last element is same we remove both element
        return ed(s1,s2,m-1,n-1);
    }
    else{
       return 1+min(
        ed(s1,s2,m-1,n), //delete element in s1S
        min(ed(s1,s2,m,n-1) //insert element in s1
        ,ed(s1,s2,m-1,n-1)) //replace element in s1
        );
    }

}
int main()
{
    string s1="CAT";
    int m=s1.length();
    string s2="CUT";
    int n=s2.length();
    cout<<ed(s1,s2,m,n);
}