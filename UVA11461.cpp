#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, num, counter;
    while (cin >> num1 >> num2)
    {
        if(num1 == num2 && num1 == 0)
        {
            break;
        }
        counter = 0;
        for(int i = num1;i <= num2;i++)
        {
            num = sqrt(i);
            if(num * num == i)
            {
                counter ++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}