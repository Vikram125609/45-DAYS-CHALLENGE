class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> array(nums.size(),0);
        for(int i = 0;i < nums.size();i++)
        {
            array[nums[i]] = array[nums[i]] + 1;
        }
        int i;
        for(i = 0;i < array.size();i++)
        {
            if(array[i] > 1)
            {
                break;
            }
        }
        return i;
    }
};