#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void missrepeat(vector<int> array)
{
    vector<int> v1;
    vector<int> v2;
    int x = array[0];
    for (int i = 1; i < array.size(); i++)
    {
        x = x ^ array[i];
    }
    for (int i = 0; i < array.size(); i++)
    {
        x = x ^ (i + 1);
    }
    int j = 0;
    while (x != (1 << j))
    {
        j++;
    }
    for (int i = 0; i < array.size(); i++)
    {
        if ((array[i] & (1 << j)) == x)
        {
            v1.push_back(array[i]);
        }
        else
        {
            v2.push_back(array[i]);
        }
    }
    for (int i = 1; i <= array.size(); i++)
    {
        if ((i & (1 << 2)) == x)
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    int ans1 = v1[0];
    int ans2 = v2[0];
    for (int i = 1; i < v1.size(); i++)
    {
        ans1 = ans1 ^ v1[i];
    }
    for (int i = 1; i < v2.size(); i++)
    {
        ans2 = ans2 ^ v2[i];
    }
    cout << ans1 << endl;
    cout << ans2 << endl;
}
int main()
{
    vector<int> array;
    array.push_back(4);
    array.push_back(3);
    array.push_back(6);
    array.push_back(2);
    array.push_back(1);
    array.push_back(1);
    missrepeat(array);
    return 0;
}