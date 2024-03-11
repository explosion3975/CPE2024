#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    int size, total;
    bool flag;
    cin >> total;
    for (int time = 0; time < total; time++)
    {
        flag = true;
        cin >> str1 >> str2 >> size;
        int array[size * size];
        for (int i = 0; i < size * size; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < size * size; i++)
        {
            if (array[i] != array[size * size - 1 - i] || array[i] < 0)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "Test #" << time + 1 << ": " << "Symmetric." << endl;
        }
        else
        {
            cout << "Test #" << time + 1 << ": " << "Non-symmetric." << endl;
        }
    }
    return 0;
}