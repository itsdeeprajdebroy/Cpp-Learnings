//Find Minimum in Rotated Sorted Array
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1, mid = 0;
        if(nums[start] < nums[end]){
            return nums[start];
        }
        while(start < end){
            mid = start + (end - start)/2;
            if(nums[mid] >= nums[0]){
                start = mid + 1;
            }
            else if(nums[mid] < nums[0]){
                end = mid;
            }
        }
        return nums[start];
    }
};
