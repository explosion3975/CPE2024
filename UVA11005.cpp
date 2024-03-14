#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total_case, total, num;
    int cost_array[36];
    cin >> total_case;
    for (int time = 0; time < total_case; time++)
    {
        cout << "Case " << time + 1 << ":" << endl;
        for (int i = 0; i < 36; i++)
        {
            cin >> cost_array[i];
        }
        cin >> total;
        for (int times = 0; times < total; times++)
        {
            cin >> num;
            cout << "Cheapest base(s) for number " << num << ":";
            int min = 9999999, array[35];
            string answer = "";
            for (int i = 2; i <= 36; i++)
            {
                int cost = 0, num1 = num;
                while (num1 > 0)
                {
                    cost += cost_array[num1 % i];
                    num1 /= i;
                }
                array[i - 2] = cost;
                if (cost <= min)
                {
                    min = cost;
                }
            }
            for (int i = 0; i < 35; i++)
            {
                if (array[i] == min)
                {
                    answer += " " + to_string(i + 2);
                }
            }
            cout << answer << endl;
        }
        if (time != total_case - 1)
        {
            cout << endl;
        }
    }
    return 0;
}