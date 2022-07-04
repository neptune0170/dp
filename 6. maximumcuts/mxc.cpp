#include<iostream>
using namespace std;

int maxcuts(int n,int a,int b,int c)
{
    if(n<0)return -1;
    if(n==0)return 0;
    int res=max(maxcuts(n-a,a,b,c),max(maxcuts(n-b,a,b,c),maxcuts(n-c,a,b,c)));
    if(res==-1)
    {
        return -1;
    }
    else return res+1;
}
int main()
{
    int n=5;
    int a=1,b=2,c=3;
    cout<<maxcuts(n,a,b,c);
}