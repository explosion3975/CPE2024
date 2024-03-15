#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total, lines, days, num, counter, friday, saturday;
    cin >> total;
    for (int time = 0; time < total; time++)
    {
        counter = 0;
        friday = 6;
        saturday = 7;
        cin >> days >> num;
        int array[3652], p[100];
        for (int i = 0; i < num; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i <= days; i++)
        {
            if (i == friday)
            {
                array[i] = 0;
                friday += 7;
                continue;
            }
            if(i == saturday)
            {
                array[i] = 0;
                saturday += 7;
                continue;
            }
            for (int ii = 0; ii < num; ii++)
            {
                // cout << i << "%" << p[ii] << endl;
                if (i % p[ii] == 0)
                {
                    array[i] = 1;
                    break;
                }
                else
                {
                    array[i] = 0;
                }
            }
        }
        for (int i = 1; i <= days; i++)
        {
            // cout << array[i] << " ";
            if (array[i] == 1)
            {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
