// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
 int countSetBits(int n)
{
        if(!n)
            return 0;
        int bits = log2(n+1), x=1<<bits;
        bits*= (x>>1);
        if(n<x)
            return bits;
        return bits+ (n-x+1) + countSetBits(n-x);
}
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
