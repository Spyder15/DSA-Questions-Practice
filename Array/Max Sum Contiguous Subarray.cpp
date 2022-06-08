
int Solution::maxSubArray(const vector<int> &A) {
    int maxSum = INT_MIN;
    int tempSum = 0;
    for (auto i = 0; i<A.size(); ++i)
    {
        tempSum += A[i];
        maxSum = max(maxSum, tempSum);
        if (tempSum < 0)
            tempSum = 0;
    }
    return maxSum;
}
