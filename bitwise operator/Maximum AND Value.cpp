// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function for finding maximum and value pair
	int maxAND (int arr[], int n)
	{
	    // Complete the function
	    if(n==1)return 0;
  sort(arr, arr + n);
  int mx = -1;
  for (int i = n - 1; i >= 0;i--){
     if(i>0){
        mx=max(mx,(arr[i]&arr[i-1]));
     }
  }
  return mx;
	}
};

// { Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout <<  ob.maxAND(arr,n)<<endl;
    }
    return 0;
}  // } Driver Code Ends
