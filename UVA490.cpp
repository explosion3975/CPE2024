#include <bits/stdc++.h>
using namespace std;
int main()
{
    string array[100];
    string str;
    int counter = 0, max_length = 0;
    while (getline(cin, array[counter]))
    {
        if (array[counter].length() > max_length)
        {
            max_length = array[counter].length();
        }
        counter++;
    }
    for (int i = 0; i < max_length; i++)
    {
        string space_str = "";
        for (int ii = counter - 1; ii >= 0; ii--)
        {
            if (array[ii].length() <= i)
            {
                space_str += " ";
            }
            else
            {
                cout << space_str << array[ii][i];
                space_str = "";
            }
        }
        cout << endl;
    }
    return 0;
}