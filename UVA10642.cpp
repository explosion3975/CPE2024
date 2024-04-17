#include <bits/stdc++.h>
using namespace std;
int count(int y, int x)
{
    int n = x + y;
    return ((n * (n + 1)) / 2) + y;
}
int main()
{
    int total, x1, x2, y1, y2;
    cin >> total;
    for (int time = 0; time < total; time++)
    {
        cin >> y1 >> x1 >> y2 >> x2;
        cout << "Case " << time + 1 << ": " << count(y2, x2) - count(y1, x1) << endl;
    }
    return 0;
}