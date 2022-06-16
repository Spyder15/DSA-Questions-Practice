// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
   {
    // Your code here
    unsigned int answer=0;
    for(int i=0;i<32;i++)
    {
       if((n&(1<<i))!=0)
       { 
           if(i%2==0)
           answer+=pow(2,i+1);
           else
           answer+=pow(2,i-1);
       }
    }
    return answer;
   }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends
