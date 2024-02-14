#include <bits/stdc++.h>
using namespace std;
int f(int num)
{
    int counter = 1;
    while(num != 1)
    {
        if(num % 2 == 1)
        {
            num = 3 * num + 1;
        }
        else
        {
            num /= 2;
        }
        counter++;
    }
    return counter;
}
int main()
{
    int num1,num2;
    int max_num,tmp;
    while(cin >> num1 >> num2)
    {
        cout << num1 << " " << num2 << " ";
        if(num1 > num2)
        {
            tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
        max_num = 0;
        for(int i = num1;i <= num2;i++)
        {
            tmp = f(i);
            if(tmp > max_num)
            {
                max_num = tmp;
            }
        }
        cout << max_num << endl;
    }
    return 0;
}