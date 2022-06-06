#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int arr[], int n)
{
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return false;
    else
       return true;
}
int deleteElement(int arr[], int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
// If x found in array
if (i < n)
{
    // reduce size of array and move all
    // elements on space ahead
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
 
return n;
}
int* getans(int arr[],int n )
{
  if(palindrome(arr, n))
     {
       for(int i=0;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       return arr;
     }
     else {
       
        int start=0;
         int end=n-1;
         while(end>=start){
           if(arr[start]==arr[end])
            {
             start++;
             end--;
            }
            else{
                if(arr[start]>arr[end]){
                    arr[end]=arr[end]+arr[end-1];
                    arr[start+1]=-101;
                    deleteElement(arr, n, -101);
                    
                    // for(int i=0;i<n-1;i++)
                    // {
                    // cout<<arr[i]<<" ";
                    // }
                    break;

                }
                else if(arr[end]>arr[start])
                 {
                    arr[start]=arr[start]+arr[start+1];
                    arr[start+1]=-101;
                    deleteElement(arr, n, -101);
                    // for(int i=0;i<n-1;i++)
                    // {
                    // cout<<arr[i]<<" ";
                    // }
                    break;
        }

            }

         }

         getans(arr,n-1);

     }
}
int main()
{
    int n=6;
    int arr[n]={15,25,34,10,15,15};
    getans(arr,n);
  
    


}