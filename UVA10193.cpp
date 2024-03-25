    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int total, num1, num2, num, num_b,num_a, gcd, tmp;
        string str1, str2;
        bool flag;
        cin >> total;
        for (int time = 0; time < total; time++)
        {
            cin >> str1 >> str2;
            gcd = 1;
            flag = true;
            // cout << str1 << " " << str2 << endl;
            num1 = 0; 
            num = 1;
            num2 = 0; 
            for (int i = str1.length() - 1; i >= 0; i--)
            {
                // cout << str1[i] - '0';
                if (str1[i] - '0' == 1)
                {
                    // cout << num;
                    num1 += num;
                }
                num *= 2;
            }
            num = 1;
            for (int i = str2.length() - 1; i >= 0; i--)
            {
                // cout << str2[i] - '0';
                if (str2[i] - '0' == 1)
                {
                    num2 += num;
                }
                num *= 2;
            }
            // cout << num1 << " " << num2 << endl;
            num_a = max(num1, num2);
            num_b = min(num1, num2);
            // cout << num_a << " 777  " << num_b << endl;
            while(num_b > 0)
            {
                tmp = num_a % num_b;
                num_a = num_b;
                num_b = tmp;
            }
            if (num_a != 1)
            {
                cout << "Pair #" << time + 1 << ": All you need is love!" << endl;
            }
            else
            {
                cout << "Pair #" << time + 1 << ": Love is not all you need!" << endl;
            }
        }
        return 0;
    }