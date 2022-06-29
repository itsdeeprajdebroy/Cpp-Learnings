//Squares of Sorted array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0);
        int i = 0,j = n - 1;
        while(n != 0)
        {
            if((nums[i] * nums[i]) > (nums[j] * nums[j]))
            {
                v[n-1] = (nums[i] * nums[i]);
                i++;
                n--;
            }
            else if((nums[i] * nums[i]) < (nums[j] * nums[j]))
            {
                v[n-1] = (nums[j] * nums[j]);
                j--;
                n--;
            }
            else if((nums[i] * nums[i]) == (nums[j] * nums[j]))
            {
                v[n-1] = (nums[j] * nums[j]);
                j--;
                n--;
            }
        }
        return v;
    }
};
