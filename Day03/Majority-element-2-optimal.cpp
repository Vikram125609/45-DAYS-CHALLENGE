#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> solution;
        int count1 = 0;
        int count2 = 0;
        int num1 = -1;
        int num2 = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if(num1 == nums[i])
            {
                count1++;
            }
            else if(num2 == nums[i])
            {
                count2++;
            }
            else if(count1 == 0)
            {
                num1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0)
            {
                num2 = nums[i];
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] == num1)
            {
                count1++;
            }
            if(nums[i] == num2)
            {
                count2++;
            }
        }
        if(count1 > nums.size()/3)
        {
            solution.push_back(num1);
        }
        if(count2 > nums.size()/3)
        {
            solution.push_back(num2);
        }
        return solution;
    }
};
int main()
{
    vector<int> array;
    vector<int> finalans;
    array.push_back(1);
    array.push_back(2);
    Solution ans;
    finalans = ans.majorityElement(array);
    for(int i = 0;i < finalans.size();i++)
    {
        cout<<finalans[i]<<" ";
    }
    return 0;
}