#include <bits/stdc++.h>
using namespace std;
int gcd(int num1, int num2)
{
    int tmp;
    if (num2 > num1)
    {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    while (num2 > 0)
    {
        tmp = num1 % num2;
        num1 = num2;
        num2 = tmp;
    }
    return num1;
}
int main()
{
    int g, num;
    while (cin >> num)
    {
        if (num == 0)
        {
            break;
        }
        g = 0;
        for (int i = 1; i < num; i++)
        {
            for (int ii = i + 1; ii <= num; ii++)
            {
                g += gcd(i, ii);
            }
        }
        cout << g << endl;
    }
    return 0;
}