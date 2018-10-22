#include <iostream>
using namespace std;

int NumberOfBetween1AndN(int n)
{
    int result = 0;
    for(int i = 1; i<=n; i++)
    {
        int count = i;
        while(count)
        {
            if(count%10 == 1)
                result++;
            count /= 10;
        }
    }
    return result;
}

int main()
{
    int result = NumberOfBetween1AndN(13);
    cout << result << endl;
}