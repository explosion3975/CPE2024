#include <bits/stdc++.h>
using namespace std;
void swap (int &a,int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int total, mod, tmp;
    int array[10000];
    cin >> total >> mod;
    cout << total << " " << mod << endl;
    for (int i = 0; i < total; i++)
    {
        cin >> array[i];
    }
    for (int i = total - 1; i > 0; i--)
    {
        for (int ii = 0; ii < i; ii++)
        {
            if(array[ii] % mod > array[ii + 1] % mod)
            {
                swap(array[ii],array[ii + 1]);
            }
            else if(array[ii] % mod == array[ii + 1] % mod)
            {
                if(array[ii] % 2 == 0 && array[ii + 1] % 2 != 0)
                {
                    swap(array[ii],array[ii + 1]);
                }
                else if(array[ii] % 2 != 0 && array[ii + 1] % 2 != 0)
                {
                    if(array[ii] < array[ii + 1])
                    {
                        swap(array[ii],array[ii + 1]);
                    }
                }
                else if(array[ii] % 2 == 0 && array[ii + 1] % 2 == 0)
                {
                    if(array[ii] > array[ii + 1])
                    {
                        swap(array[ii],array[ii + 1]);
                    }
                }
            }
        }
    }
    for (int i = 0; i < total; i++)
    {
        cout << array[i] << endl;
    }
    cout << "0 0" << endl;
    return 0;
}