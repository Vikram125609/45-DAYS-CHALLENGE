#include <iostream>
#include <vector>
using namespace std;
int maxSum(vector<int> &array)
{
    int sum;
    int maxSum = INT_MIN;
    for (int i = 0; i < array.size(); i++)
    {
        sum = 0;
        for (int j = i; j < array.size(); j++)
        {
            sum = sum + array[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
int main()
{
    vector<int> array;
    array.push_back(-2);
    array.push_back(1);
    array.push_back(4);
    array.push_back(-5);
    array.push_back(-1);
    array.push_back(4);
    array.push_back(-1);
    array.push_back(5);
    cout << maxSum(array);
    return 0;
}