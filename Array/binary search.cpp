  #include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int L = 0;
        int H = n-1;
        int m = L+(H-L)/2;
        while(L<=H){
            if(arr[m]==k){
                return m;
            }
            else if(arr[m]<k){
                L=m+1;
            }
            else{
                H=m-1;
            }
            m = L+(H-L)/2;
        }
        
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
