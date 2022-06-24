vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> m1, m2;
    vector<int> ans;
    for (int i : nums1)
        m1[i]++;
    for (int i : nums2)
        m2[i]++;
    unordered_set<int> s;
    for (int i = 0; i < nums1.size(); i++)
        s.insert(nums1[i]);
    for (int i = 0; i < nums2.size(); i++)
        s.insert(nums2[i]);

    for (auto i : s)
    {
        auto it1 = m1.find(i), it2 = m2.find(i);
        if (it1 != m1.end() && it2 != m2.end())
        {
            int n1 = (*m1.find(i)).second, n2 = (*m2.find(i)).second;
            int n = min(n1, n2);
            while (n--)
            {
                ans.push_back(i);
            }
        }
    }
    return ans;
}