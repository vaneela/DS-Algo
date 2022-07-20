class Solution
{
public:
    string interpret(string s)
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                if (s[i + 1] == ')')
                {
                    ans += 'o';
                    i++;
                }
                else if (s[i + 1] == 'a' && s[i + 2] == 'l' && s[i + 3] == ')')
                {
                    ans += "al";
                    i += 3;
                }
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};