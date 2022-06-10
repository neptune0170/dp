#include <bits/stdc++.h>
using namespace std;
const int maximum = 1000;
int min(int x, int y, int z)
{
    return min(min(x, y), z);
}
 
int editDist(string str1, string str2, int m, int n, int dp[][maximum])
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (str1[m - 1] == str2[n - 1])
        return dp[m - 1][n - 1] = editDist(str1, str2, m - 1, n - 1, dp);
    return dp[m - 1][n - 1] = 1 + min(editDist(str1, str2, m, n - 1, dp), // Insert
                                      editDist(str1, str2, m - 1, n, dp), // Remove
                                      editDist(str1, str2, m - 1, n - 1, dp) // Replace
                                      );
}
 
// Driver Code
int main()
{
 
    string str1 = "sunday";
    string str2 = "saturday";
    int m = str1.length();
    int n = str2.length();
    int dp[m][maximum];
    memset(dp, -1, sizeof dp);
    cout << editDist(str1, str2, m, n, dp);
    return 0;
}