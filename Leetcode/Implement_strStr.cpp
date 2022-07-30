class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int ans = -1;
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {

                for (int j = 0; j < needle.size(); j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        ans = -1;
                        // i=i+j-1;
                        break;
                    }
                    else
                    {
                        if (j == (needle.size() - 1))
                            return i;
                        else
                            ans = i;
                    }
                }
            }
        }
        return ans;
    }
};