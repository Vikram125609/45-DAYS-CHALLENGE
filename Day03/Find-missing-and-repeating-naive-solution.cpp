#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int slow = arr[0];
    int fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[fast];
    } while (slow != fast);
    fast = arr[0];
    while (fast != slow)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    int correctSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }
    int repeating = fast;
    int missing = correctSum - sum + repeating;
    pair<int, int> p;
    p.first = missing;
    p.second = repeating;
    return p;
}
