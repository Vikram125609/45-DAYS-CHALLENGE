class Solution {
public:
    vector<int> solution;
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]] = mp[nums[i]] + 1;
        }
        for (auto it : mp)
        {
            if(it.second > nums.size()/3)
            {
                solution.push_back(it.first);
            }
        }
        return solution;
    }
};