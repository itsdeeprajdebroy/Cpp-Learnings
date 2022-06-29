// Largest Number At Least Twice of Others
class Solution {
public:
    int maximum(vector<int>& nums)
    {
        int n = nums.size();
        int max = nums[0], index = 1, maxIndex = 0;
        while(index != n)
        {
            if(max < nums[index])
            {
                max = nums[index];
                maxIndex = index;
            }
            index++;
        }
        return maxIndex;
    }
    int dominantIndex(vector<int>& nums)
    {
        int maxIndex = maximum(nums), n = nums.size(), i = 0;
        while(i != n)
        {
            if(nums[maxIndex] != nums[i])
            {
                if(nums[maxIndex] < (2 * nums[i]))
                {
                    return -1;
                }
            }
            i++;
        }
        return maxIndex;
    }
};
