#include <iostream>

using namespace std;



int main()
{
    int a;
    cin >> a;
    int flag = 1;
    int count = 0;
    while(flag)
    {
        if(flag & a)
        {
            count++;
        }
        flag = flag << 1;
    }
    cout << count << endl;
}