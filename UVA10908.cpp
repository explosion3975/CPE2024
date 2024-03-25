#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << 777;
    int total, row, col, lines, answer, num1, num2;
    string array[21];
    bool flag;
    cin >> total;
    for (int time = 0; time < total; time++)
    {
        cin >> row >> col >> lines;
        cout << row << " " << col << " " << lines << endl;
        for (int i = 0; i < row; i++)
        {
            cin >> array[i];
        }
        for (int line = 0; line < lines; line++)
        {
            answer = 1;
            flag = true;
            cin >> num1 >> num2;
            cout << array[num1][num2] << endl;
            while (num1 - answer >= 0 && num2 - answer >= 0 && num1 + answer < row && num2 + answer < col && flag)
            {
                for (int i = 0; i < 2 * answer + 1; i++)
                {
                    if (array[num1][num2] != array[num1 - answer][num2 - answer + i])
                    {
                        flag = false;
                        break;
                    }
                    if (array[num1][num2] != array[num1 + answer][num2 - answer + i])
                    {
                        flag = false;
                        break;
                    }
                }
                for (int i = 1; i < 2 * answer && flag; i++)
                {
                    if (array[num1][num2] != array[num1 - answer + 1 + i][num2 - answer])
                    {
                        flag = false;
                        break;
                    }
                    if (array[num1][num2] != array[num1 - answer + 1 + i][num2 + answer])
                    {
                        flag = false;
                        break;
                    }
                }
                answer++;
            }
            cout << answer * 2 + 1 << endl;
            //     // cout << answer * 2 + 1 << " " << array[num1][num2] << endl;
            //     // for (int i = num1, ii = num2; i > 0 && ii > 0 && i < row && ii < col; i--, ii--)
            //     // {

            //     // }
        }
    }
    return 0;
}
// 00 01 02 03 04 10 11 12 13 14 20 21 22 23 24 30 31 32 33 34 40 41 42 43 44