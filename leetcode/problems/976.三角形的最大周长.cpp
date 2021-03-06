class Solution
{
public:
    int largestPerimeter(vector<int> &A)
    {
        int ans = 0;
        sort(A.begin(), A.end());
        for (int i = 2; i < A.size(); i++)
        {
            if (A[i - 1] + A[i - 2] > A[i])
            {
                ans = A[i] + A[i - 1] + A[i - 2];
            }
        }
        return ans;
    }
};
