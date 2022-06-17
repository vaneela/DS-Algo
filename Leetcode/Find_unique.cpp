#include<bits/stdc++.h>
using namespace std;
//O(n) constant space
int singleNumber(vector<int>& arr) {
        int ans =0;
    for(int i=0;i<arr.size();i++){
        ans^=arr[i];
    }
    return ans;

    }
int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        vector<int>input(size);
        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}