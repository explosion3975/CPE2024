#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, mod, tmp_num;
    float tmp;
    while (cin >> num >> mod)
    {
        tmp = log(num) / log(mod);
        if (tmp - (int)tmp == 0)
        {
            while (num != 1)
            {
                cout << num << " ";
                num /= mod;
            }
            cout << 1 << endl;
        }
        else
        {
            cout << "Boring!" << endl;
        }
    }
    return 0;
}