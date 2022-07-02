#include<iostream>
using namespace std;
int fib(int n)
{
    int f[n+1];
    f[0]=0;f[1]=1;
    for(int j=2;j<=n;j++)
    {
         f[j]=f[j-1]+f[j-2];
    }
    return f[n];
}
int main()
{
    int n=5;
    cout<<fib(5);
}

//BOTTOM UP