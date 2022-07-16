#include <iostream>
#include <vector>
using namespace std;
int conquere(vector<int>& array, int first, int mid, int last)
{
    int len1 = mid - first + 1;
    int len2 = last - mid;
    int array1[len1];
    int array2[len2];
    int static count = 0;
    int i = 0, j = 0, Index = first;
    for (i = 0; i < len1; i++)
    {
        array1[i] = array[Index++];
    }
    for (int i = 0; i < len2; i++)
    {
        array2[i] = array[Index++];
    }
    i = 0, j = 0, Index = first;
    while (i < len1 && j < len2)
    {
        if (array1[i] <= array2[j])
        {
            array[Index++] = array1[i++];
        }
        else
        {
            array[Index++] = array2[j++];
            count = count + mid - i;
        }
    }
    while (i < len1)
    {
        array[Index++] = array1[i++];
    }
    while (j < len2)
    {
        array[Index++] = array2[j++];
    }
    return count;
}
int count1 = 0;
int divide(vector<int> &array, int first, int last)
{
    if (first >= last)
    {
        return 0;
    }
    int mid = (first + last) / 2;
    divide(array, first, mid);
    divide(array, mid + 1, last);
    count1 += conquere(array, first, mid, last);
    return count1;
}
int main()
{
    vector<int> array;
    array.push_back(2);
    array.push_back(1);
    array.push_back(3);
    array.push_back(4);
    cout<<divide(array, 0, array.size() - 1);
    return 0;
}