// { Driver Code Starts
#include<stdio.h>

 // } Driver Code Ends


void printNos(int n)
{
  if(n > 0)
  {
    printNos(n-1);
    printf("%d ",  n);
  }
}

void printTillN(int N)
{
    printNos(N);
}


// { Driver Code Starts.
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int N;
        scanf("%d",&N);
        printTillN(N);
        printf("\n");
        

    }
    return 0;
}  // } Driver Code Ends
