#include <iostream>
using namespace std;
int main()
{
    int total;
    cin >> total;
    for(int num = 0;num < total;num++)
    {
        int num1,sum = 0;
        int array[10000];
        cin >> num1;
        for(int i = 0;i < num1;i++)
        {
            cin >> array[i];
        }
        for(int i = num1 - 1;i > 0;i--)
        {
            for(int ii = 0;ii < i;ii++)
            {
                if (array[ii] > array[ii + 1])
                {
                    int tmp = array[ii];
                    array[ii] = array[ii + 1];
                    array[ii + 1] = tmp;
                }
            }
        }
        int middle = (num1 - 1) / 2;
        for(int i = 0;i < num1;i++)
        {
            sum += abs(array[middle] - array[i]);
        }
        cout << sum << endl;
    }
    return 0;
}