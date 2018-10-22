#include <iostream>
#include <string>

using namespace std;

void replace_space(char* s, int length)
{
    if(!s || length<=0)
    {
        return;
    }
    int i = 0;
    int old_number = 0;
    int space_number = 0;
    int new_number = 0;
    while(s[i] != '\0')
    {
        old_number++;
        if (s[i] == ' ')
        {
            space_number++;
        }
        i++;
    }
    new_number = old_number+2*space_number;
    if(new_number > length)
    {
        return;
    }
    int pOld = old_number;
    int pNew = new_number;
    while(pNew > pOld && pOld >=0)
    {
        if(s[pOld] == ' ')
        {
            s[pNew--] = '0';
            s[pNew--] = '2';
            s[pNew--] = '%';
        }
        else
        {
            s[pNew--] = s[pOld];
        }
        pOld--;
    }

}

int main()
{
    char a[20] = "how are you?";
    replace_space(a, 20);
    for (int i = 0; i< 20; i++)
    {
        cout << a[i];
    }

}