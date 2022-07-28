class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (t.size() != s.size())
            return 0;
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;
        for (char ch : s)
            ms[ch]++;
        for (char ch : t)
            mt[ch]++;
        for (auto it : mt)
        {
            auto cur = ms.find(it.first);
            if (cur == ms.end())
                return 0;
            if (cur->second != it.second)
                return 0;
        }
        return 1;
    }
};