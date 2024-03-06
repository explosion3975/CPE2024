#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    int player_num, winner;
    float probability, answer;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> player_num >> probability >> winner;
        if (probability == 0)
        {
            cout << "0.0000" << endl;
            continue;
        }
        answer = (pow(1 - probability, winner - 1) * probability) / (1 - pow(1 - probability, player_num));
        cout << fixed << setprecision(4) << answer << endl;
    }
    return 0;
}