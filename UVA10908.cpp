#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total, row, col, lines, answer, num1, num2;
    string array[30];
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
                for (int i = 0; i < 2 * answer + 1 && flag; i++)
                {
                    if (array[num1][num2] != array[num1 - answer + i][num2 - answer])
                    {
                        flag = false;
                        break;
                    }
                    if (array[num1][num2] != array[num1 - answer + i][num2 + answer])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    answer++;
                }
            }
            answer--;
            cout << answer * 2 + 1 << endl;
        }
    }
    return 0;
}