class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int firstArrayPointer = m - 1;
        int secondArrayPointer = n - 1;
        int finalArrayPointer = m + n -1;
        while(firstArrayPointer >= 0 && secondArrayPointer >= 0)
        {
            if(nums1[firstArrayPointer] >= nums2[secondArrayPointer])
            {
                nums1[finalArrayPointer] = nums1[firstArrayPointer];
                finalArrayPointer--;
                firstArrayPointer--;
            }
            else
            {
                nums1[finalArrayPointer] = nums2[secondArrayPointer];
                finalArrayPointer--;
                secondArrayPointer--;
            }
        }
        while(secondArrayPointer >= 0)
        {
            nums1[finalArrayPointer] = nums2[secondArrayPointer];
            finalArrayPointer--;
            secondArrayPointer--;
        }
    }
};