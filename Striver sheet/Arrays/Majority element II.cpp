class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int e1 = -1, e2 = -1, c1 = 0, c2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (e1 == nums[i])
            {
                c1++;
            }
            else if (e2 == nums[i])
                c2++;
            else if (c1 == 0)
            {
                e1 = nums[i];
                c1 = 1;
            }
            else if (c2 == 0)
            {
                e2 = nums[i];
                c2 = 1;
            }

            else
            {
                c1--;
                c2--;
            }
        }
        c1 = 0;
        c2 = 0;
        for (auto i : nums)
        {
            if (i == e1)
                ++c1;
            else if (i == e2)
                ++c2;
        }
        // cout << c1 << " " << c2 << endl;
        if (c1 <= floor(nums.size() / 3) && c2 <= floor(nums.size() / 3))
            return {};
        if (c1 > floor(nums.size() / 3) && c2 > floor(nums.size() / 3))
            return {e1, e2};

        if (c1 > c2)
            return {e1};
        else if (c2 > c1)
            return {e2};
        return {};
    }
};