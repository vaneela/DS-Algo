class Solution
{
public:
    void solve(string digits, string temp, int ind, vector<string> &ans, string mapping[])
    {
        if (ind >= digits.size())
        {
            ans.push_back(temp);
            return;
        }

        int n = digits[ind] - '0';
        string val = mapping[n];
        for (int i = 0; i < val.size(); i++)
        {
            temp.push_back(val[i]);
            solve(digits, temp, ind + 1, ans, mapping);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> ans;
        if (digits.size() == 0)
            return ans;
        string temp = "";
        solve(digits, temp, 0, ans, mapping);
        return ans;
    }
};