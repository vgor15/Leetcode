class Solution {
public:
    bool check(vector<int>& nums) {
        int breaks = 0;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i-1])
                breaks++;
        }

        if (nums[0] < nums[n-1])
            breaks++;

        return breaks <= 1;
    }
};
