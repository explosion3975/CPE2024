#include <iostream>
#include <algorithm>
using namespace std;
int lost_array[10][3];
int counter = 0;
bool find_lost(int x,int y,int d)
{
    int i,ii;
    for(i = 0;i < counter;i++)
    {
        if(lost_array[i][0] == x && lost_array[i][1] == y && lost_array[i][2] == d)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int max_x, max_y, x, y, i,ii;
    bool lost;
    string direction[4] = {"E", "S", "W", "N"};
    string input, *p, str, d;
    cin >> max_x >> max_y;
    while (cin >> x >> y >> d)
    {
        cin >> input;
        for (i = 0,lost = true; i < input.length(); i++)
        {
            str = input[i];
            p = find(direction, direction + 3, d);
            if (str == "R")
            {
                if (p - direction + 1 < 4)
                    d = direction[p - direction + 1];
                else
                    d = direction[0];
            }
            else if (str == "L")
            {
                if (p - direction - 1 >= 0)
                    d = direction[p - direction - 1];
                else
                    d = direction[3];
            }
            else if(str == "F")
            {
                if(d == "N")
                {
                    if(find_lost(x,y,p - direction))
                    {   
                        continue;
                    }
                    y++;
                    if(y > max_y)
                    {
                        lost = false;
                        y--;
                        lost_array[counter][0] = x;
                        lost_array[counter][1] = y;
                        lost_array[counter][2] = 3;
                        counter++;
                        break;
                    }
                }
                if(d == "E")
                {
                    if(find_lost(x,y,p - direction))
                        continue;
                    x++;
                    if(x > max_x)
                    {
                        lost = false;
                        x--;
                        lost_array[counter][0] = x;
                        lost_array[counter][1] = y;
                        lost_array[counter][2] = 0;
                        counter++;
                        break; 
                    }
                }
                if(d == "S")
                {
                    if(find_lost(x,y,p - direction))
                        continue;
                    y--;
                    if(y < 0)
                    {
                        lost = false;
                        y++;
                        lost_array[counter][0] = x;
                        lost_array[counter][1] = y;
                        lost_array[counter][2] = 1;
                        counter++;
                        break; 
                    }
                }
                if(d == "W")
                {
                    if(find_lost(x,y,p - direction))
                        continue;
                    x--;
                    if(x < 0)
                    {
                        lost = false;
                        x++;
                        lost_array[counter][0] = x;
                        lost_array[counter][1] = y;
                        lost_array[counter][2] = 2;
                        counter++;
                        break; 
                    }
                }
            }
        }
        if(lost)
            cout << x << " " << y << " " << d << endl;
        else
            cout << x << " " << y << " " << d << " LOST" << endl;
    }
    return 0;
}