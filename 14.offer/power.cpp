#include <iostream>
using namespace std;

double power(double base, int exp)
{
    if(base == 0)
        return 0;
    if(exp < 0)
    {
        exp *= -1;
        base = 1/base;
    }
    
    if(exp == 1)
    {
        return base;
    }
    else if(exp%2 == 1)
    {
        return power(base, exp/2)*power(base, exp/2)*base;
    }
    else
    {
        return power(base, exp/2)*power(base, exp/2);
    }
}

int main()
{
    int exp;
    double base;
    cin >> base >> exp;
    cout << power(base, exp);

}