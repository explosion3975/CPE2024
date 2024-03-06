#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    int num1,num2;
    cin >> total;
    for(int i = 0;i < total;i++)
    {
        cin >> num1 >> num2;
        if(num1 % 2 != 1)
        {
            num1++;
        }
        if (num2 % 2 != 1)
        {
            num2--;
        }
        cout << "Case " << i + 1 << ": " << ((num1 + num2) * (((num2 - num1) / 2) + 1)) / 2 << endl;
    }
    return 0;
}