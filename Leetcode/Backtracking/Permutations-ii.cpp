class Solution
{
public:
    void solve(vector<int> &nums, int ind, vector<vector<int>> &ans)
    {
        if (ind >= nums.size())
        {
            if (find(ans.begin(), ans.end(), nums) == ans.end())
                ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {
            swap(nums[i], nums[ind]);
            solve(nums, ind + 1, ans);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<vector<int>> ans;
        solve(nums, 0, ans);
        return ans;
    }
};