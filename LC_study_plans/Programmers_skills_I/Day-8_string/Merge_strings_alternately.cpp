class Solution
{
public:
    string mergeAlternately(string s1, string s2)
    {
        string ans;
        int i = 0, j = 0;
        int n = s1.size(), m = s2.size();
        while (n > 0 && m > 0)
        {
            ans.push_back(s1[i++]);
            ans.push_back(s2[j++]);
            n--;
            m--;
            // cout << ans <<" ";
        }
        while (n > 0)
        {
            ans.push_back(s1[i++]);
            n--;
        }

        while (m > 0)
        {
            ans.push_back(s2[j++]);
            m--;
        }
        return ans;
    }
};