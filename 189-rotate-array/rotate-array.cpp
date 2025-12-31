class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;  // normalize k

        // Reverse helper
        auto reverse = [&](int l, int r) {
            while (l < r) {
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
        };

        // Step 1: reverse whole array
        reverse(0, n - 1);
        // Step 2: reverse first k elements
        reverse(0, k - 1);
        // Step 3: reverse remaining n-k elements
        reverse(k, n - 1);
    }
};
