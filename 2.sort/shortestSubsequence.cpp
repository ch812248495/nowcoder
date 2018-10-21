#include "head.cpp"
    int shortestSubsequence(vector<int> a, int n) {
        int maxRight = 0;
        int maxFromLeft = a[0];
        int minFromRight = a[n-1];
        int minLeft = 0;
        for(int i = 1; i < n; i++)
        {
            if(a[i] > maxFromLeft)
            {
                maxFromLeft = a[i];
            }
            if(a[i] < maxFromLeft)
            {
                maxRight = i;
            }
        }

        for(int i = n-1; i > 0; i--)
        {
            if(a[i] < minFromRight)
            {
                minFromRight = a[i];
            }
            if(a[i] > minFromRight)
            {
                minLeft = i;
            }
        }
        return maxRight-minLeft == 0? 0:maxRight-minLeft+1;
    }
int main()
{
    int a[] = {1,2,5,3,7,6,9,10};
    vector<int> A(a, a+8);
    cout << shortestSubsequence(A, 8) << endl;
}