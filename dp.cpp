#include<bits/stdc++.h>
using namespace std;
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

bool palindrome(int arr[], int n)
{
    // Initialise flag to zero.
    int flag = 0;
 
    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    // If flag is set then print Not Palindrome
    // else print Palindrome.
    if (flag == 1)
        return false;
    else
       return true;
}
 
int main()
{
   int arr[6]={15,25,34,10,15,15};
   int end=5;
   int n= sizeof(arr)/sizeof(arr[0]);
   
   int start=0;
   while(end>start)
   {
     if(arr[start]==arr[end])
     {
       start++;
       end--;
     }
     else {
       if(arr[start]>arr[end]){
         arr[end]=arr[end]+arr[end-1];
         arr[start+1]=-101;
         deleteElement(arr, 6, -101);
         for(int i=0;i<5;i++)
         {
           cout<<arr[i]<<" ";
         }
         break;


       }
       else if(arr[end]>arr[start])
       {
         arr[start]=arr[start]+arr[start+1];
         arr[start+1]=-101;
         deleteElement(arr, 6, -101);
          for(int i=0;i<5;i++)
         {
           cout<<arr[i]<<" ";
         }
         break;
        }
     }
    
     
   }
   if(palindrome(arr, 5))
     {
       cout<<5<<" ";
     }
     else {
       return -1;
     }
    
}