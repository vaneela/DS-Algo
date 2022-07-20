class Solution
{
public:
    vector<int> solve(vector<int> &arr)
    {
        vector<int> nge(arr.size());
        stack<int> st;
        for (int i = 0; i < arr.size(); i++)
        {
            while (!st.empty() && arr[i] > arr[st.top()])
            {
                nge[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty())
        {
            nge[st.top()] = -1;
            st.pop();
        }
        return nge;
    }
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        vector<int> nge = solve(nums2);
        for (int i = 0; i < nums2.size(); i++)
        {
            m.insert({nums2[i], nge[i]});
        }
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++)
        {
            auto it = m.find(nums1[i]);
            if (it->second != -1)
                ans.push_back(nums2[it->second]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};