//Find the Smallest Divisor Given a Threshold
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int h) {
        long int low = 1, high = *max_element(nums.begin(), nums.end());
        long int mid = 0, count;
        while(low <= high)
        {
            count = 0;
            mid = (low + high)/2;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] % mid == 0)
                    count = count + (nums[i] / mid);
                else
                    count = count + (nums[i] / mid) + 1;
            }
            if(low == high)
                return low;//to stop infinite loop
            if(count > h)
                low = mid + 1;
            else if(count <= h)
                high = mid;//checking if other options also available
        }
        return 0;
    }
};
