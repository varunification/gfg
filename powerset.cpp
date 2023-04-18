#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp = "abc";
    string temp2;
    int len = temp.size();
    for (int i = 0; i < (1 << len) + 1; i++)
    {

        for (int j = 0; j < len; j++)
        {
            if (i & 1 << j)
            {
                temp2 += temp[j];
            }
        }
        temp2 += " ";
    }

    cout << temp2;

    return 0;
}