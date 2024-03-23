#include <bits/stdc++.h>
using namespace std;
int to_sum(string str)
{
    int num = 0;
    for (int i = 0; i < str.length(); i++)
    {
        num += str[i] - '0';
    }
    return num;
}
int main()
{
    int num,counter,tmp_num;
    string str;
    while (cin >> str)
    {
        counter = 0;
        if (str == "0")
        {
            break;
        }
        if (str == "9")
        {
            cout << "9 is a multiple of 9 and has 9-degree 1." << endl;
            continue;
        }
        cout << str;
        if(to_sum(str) % 9 == 0)
        {
            counter = 0;
            while(str != "9")
            {
                counter += 1;
                num = to_sum(str);
                str = to_string(num);
            }
        }
        if(counter == 0)
        {
            cout << " is not a multiple of 9." << endl;
        }
        else
        {
            cout << " is a multiple of 9 and has 9-degree " << counter << "." << endl;
        }
    }
    return 0;
}