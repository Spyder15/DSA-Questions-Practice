// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
   void solve(vector<int>A, vector<int>output,int index,vector<vector<int>>&ans)
   {
       //base case
       if(index >= A.size())
       {
           ans.push_back(output);
           return;
       }
       
       // exclude
       solve(A,output,index+1,ans);
       
       //include
       int element = A[index];
       output.push_back(element);
       solve(A,output,index+1,ans);
       
   }
   
   vector<vector<int> > subsets(vector<int>& A)
   {
       vector<vector<int>>ans;
       vector<int>output;
       
       int index = 0;
       solve(A,output,index,ans);
       sort(ans.begin(),ans.end());
       return ans;
   }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends
