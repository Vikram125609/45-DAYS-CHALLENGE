class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Dutch nation flag algorithm
        int low = 0;
        int mid = 0;
        int hig = nums.size() - 1;
        while(mid <= hig)
        {
            if(mid > hig)
            {
                break;
            }
            if(nums[mid] == 0)
            {
                swap(nums[low],nums[mid]);
                low++; 
                mid++;
                continue;
            }
            if(nums[mid] == 1)
            {
                mid++;
                continue;
            }
            if(nums[mid] == 2)
            {
                // if(nums[hig] == 2)
                //     hig--;
                swap(nums[mid],nums[hig]);
                hig--;
                continue;
            }
        }
    }
};