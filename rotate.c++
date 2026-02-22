#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> temp(n);
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }
    nums = temp;
}
int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter k: ";
    cin >> k;
    rotate(nums, k);
    cout << "Rotated array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    return 0;
}