#include <iostream>
#include <vector>

void FindNumsAppearOnce(vector<int> data, int* num1, int* num2)
{
    if(data.size() < 2)
        return
    int myxor = 0;
    int flag = 1;
    for(int i = 0; i<data.size(); i++)
    {
        myxor ^= data[i];
    }
    while((myxor & flag) == 0) 
        flag <<= 1;
    *num1 = myxor;
    *num2 = myxor;
    for(int i = 0; i < data.size(); i++)
    {
        if((flag & data[i] == 0))
            *num2 ^= data[i];
        else 
            *num1 ^= data[i];
    }
}