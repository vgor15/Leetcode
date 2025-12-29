class Solution {
public:
    int partitions(vector<int> &arr, int low, int high)
    {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (i <= high - 1 && arr[i] <= pivot)
                i++;

            while (j >= low + 1 && arr[j] > pivot)
                j--;

            if (i < j)
                swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pIndex = partitions(arr, low, high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};
