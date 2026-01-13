class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // using mooves voting algorithm.
        int c=0;
        int el;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0)
            {
                c=1;
                el = nums[i];
            }
            else if(nums[i] == el)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        int c1=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == el) c1++;
        }
        if(c1 > (nums.size()/2))
        return el;
        else 
        return -1;
    }
};