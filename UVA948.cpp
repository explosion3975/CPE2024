#include <bits/stdc++.h>
#define len 40
using namespace std;
int main()
{
    int array[len];
    int total, num, max;
    bool flag = false;
    string ans;
    array[0] = 1;
    array[1] = 2;
    for (int i = 2; i < len; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }
    cin >> total;
    for (int time = 0; time < total; time++)
    {
        flag = false;
        cin >> num;
        cout << num;
        ans = "";
        for (int i = 0; i < len; i++)
        {
            if (array[i] >= num)
            {
                max = i;
                break;
            }
        }
        // cout << max << endl;
        for (int i = max; i >= 0; i--)
        {
            if (num >= array[i])
            {
                num -= array[i];
                ans = ans + "1";
                flag = true;
            }
            else if(flag)
            {
                ans = ans + "0";
            }
        }
        cout << " = " << ans << " (fib)" << endl;
    }
    return 0;
}