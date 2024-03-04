#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    bool flag = true;
    while (getline(cin, str))
    {
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '"')
            {
                if (flag)
                {
                    cout << "``";
                    flag = !flag;
                }
                else
                {
                    cout << "''";
                    flag = !flag;
                }
            }
            else
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}