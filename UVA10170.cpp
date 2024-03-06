#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, day,total = 0;

    while (cin >> num >> day)
    {
        total = num;
        while(total < day)
        {
            num++;
            total += num;
        }
        cout << num << endl;

    }
    return 0;
}