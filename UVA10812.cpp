#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total, sum, diff, num1, num2;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> sum >> diff;
        if (((sum + diff) / 2.0) - ((sum + diff) / 2) != 0)
        {
            cout << "impossible" << endl;
            continue;
        }
            num1 = (sum + diff) / 2;
        num2 = sum - num1;
        if (num1 < 0 || num2 < 0)
        {
            cout << "impossible" << endl;
        }
        else
        {
            if (num2 > num2)
            {
                int tmp = num1;
                num1 = num2;
                num2 = tmp;
            }
            cout << num1 << " " << num2 << endl;
        }
    }
    return 0;
}