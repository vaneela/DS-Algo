class Solution
{
public:
    string freqAlphabets(string s)
    {
        string ans = "";
        unordered_map<char, char> mp;
        for (int i = 1; i <= 9; i++)
        {
            mp[i + '0'] = 'a' + (i - 1);
        }

        unordered_map<string, char> mpp;
        for (int i = 10; i <= 26; i++)
        {
            string temp = "";
            temp += to_string(i);
            temp += '#';
            mpp[temp] = 'a' + (i - 1);
        }

        for (int i = 0; i < s.size(); i++)
        {

            if (i > (s.size() - 2) && s[i] >= 48 && s[i] <= 57)
                ans.push_back(mp[s[i]]);

            else if (s[i + 2] != '#' && s[i] >= 48 && s[i] <= 57)
            {
                ans += mp[s[i]];
            }
            else
            {
                string temp = "";
                temp += s[i];
                temp += s[++i];
                temp += s[++i];
                ans += mpp[temp];
            }
        }
        return ans;
    }
};