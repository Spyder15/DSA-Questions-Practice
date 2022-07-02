// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
 public:
   int minJumps(int arr[], int n){
       // Your code here
       int i=0,steps=0,j,max=-1,t;
      if(n==1){
          return 0;
      }
      while(1){
          max=-1;
          if(i+arr[i]>=n-1){
              steps++;
              break;
          }
          if(arr[i]==0 ||i>=n){
              return -1;
          }
          for(j=i+1;j<=i+arr[i];j++){
              if(j+arr[j]>=n-1){
                  t=j;
                  break;
              }
              if(j+arr[j]>max){
                  max=arr[j]+j;
                  t=j;
              }
          }
          i=t;
          steps++;
      }
      return steps;
   }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
