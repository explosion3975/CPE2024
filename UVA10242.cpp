#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {
        cout << fixed << setprecision(3) << x2 + 2 * (((x4 + x1) / 2) - x2) << " " << y2 + 2 * (((y4 + y1) / 2) - y2) << endl;
    }
    return 0;
}