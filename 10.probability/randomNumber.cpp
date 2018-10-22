#include "head.cpp"

int rand5()
{
    return 1;
}

int randomNumber()
{
    int temp;
    do
    {
        temp = 5*rand5() + rand5();
    }while(temp > 26);
    return (temp%7+1);

}