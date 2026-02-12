
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int maxVal = INT_MIN;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxVal) {
                ans.push_back(arr[i]);
                maxVal = arr[i];
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> result = obj.leaders(arr);

    cout << "Leaders: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}