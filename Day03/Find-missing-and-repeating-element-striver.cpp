#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
pair<int, int> missrepeat(vector<int> array)
{
    int n = array.size();
    int acutalSum = (n * (n + 1)) / 2;
    int acutalSumSquare = (n * (n + 1) * (2 * n + 1)) / 6;
    int dummySum = 0;
    int dummySumSquare = 0;
    for (int i = 0; i < array.size(); i++)
    {
        dummySum = dummySum + array[i];
    }
    for (int i = 0; i < array.size(); i++)
    {
        dummySumSquare = dummySumSquare + pow(array[i], 2);
    }
    int diffSum = acutalSum - dummySum;
    int diffSumSquare = acutalSumSquare - dummySumSquare;
    int sumOfMissRepeat = diffSumSquare / diffSum;
    int diffOfMissRepeat = diffSum;
    int missing = (sumOfMissRepeat + diffOfMissRepeat) / 2;
    int repeating = sumOfMissRepeat - missing;
    pair<int, int> p;
    p.first = missing;
    p.second = repeating;
    return p;
}
int main()
{
    vector<int> array;
    array.push_back(4);
    array.push_back(3);
    array.push_back(5);
    array.push_back(2);
    array.push_back(1);
    array.push_back(1);
    missrepeat(array);
    pair<int, int> p = missrepeat(array);
    cout << p.first << " " << p.second << endl;
    return 0;
}