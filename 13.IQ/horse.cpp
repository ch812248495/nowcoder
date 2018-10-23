#include "head.cpp"

int horseWin(vector<int> oppo, vector<int> horses, int n)
{
    sort(oppo.begin(), oppo.end());
    sort(oppo.begin(), oppo.end());
    int i = n-1;
    int j = n-1;
    int count = 0;
    while(i>=0 && j>=0)
    {

        if(horses[i] > oppo[j])
        {
            i--;
            j--;
            count++;
        }
        else
        {
            j--;
        }
    }
    return count;
}

int main()
{
    int h[] = {1,2,3};
    vector<int> a(h,h+3);
    vector<int> b(h,h+3);
    cout << horseWin(a, b, 3) << endl;
}
