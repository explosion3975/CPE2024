#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    int carry,counter;
    while(cin >> num1 >> num2)
    {
        if(num1 == num2 && num1 == 0)
        {
            break;
        }
        carry = 0;
        counter = 0;
        while(num1 > 0 || num2 > 0)
        {
            if(num1 % 10 + num2 % 10 + carry > 9)
            {
                counter++;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            num1 /= 10;
            num2 /= 10;
        }
        switch(counter)
        {
            case 0:
                cout << "No carry operation." << endl;
                break;
            case 1:
                cout << "1 carry operation." << endl;
                break;
            default:
                cout << counter << " carry operations." << endl;
        }
    }
    return 0;
}