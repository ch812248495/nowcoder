#include "head.cpp"

string replaceSpace(string iniString, int length)
{
    int space_num = 0;
    for(int i = 0; i < iniString.size(); i++)
    {
        if(iniString[i] == ' ')
            space_num++;
    }
    int size_after_replace = length+2*space_num-1;
    int i;
    int j;
    for(i = size_after_replace, j = length-1; space_num > 0;)
    {
        if(iniString[j] == ' ')
        {
            iniString[i--] = '0';
            iniString[i--] = '2';
            iniString[i--] = '%';
            space_num--;
            j--;
        }
        else
        {
            iniString[i--] = iniString[j--];
        }
    }
    return iniString;
}

int main()
{
    string s = "Mr John Smith11111111";
    int length = 13;
    cout << replaceSpace(s, 13) << endl;
}