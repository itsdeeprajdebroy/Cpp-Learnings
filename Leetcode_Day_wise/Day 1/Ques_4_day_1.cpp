//Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0, index = 0, majority_Element = 0;
        while(index != n)
        {
            if(count == 0)
            {
                majority_Element = nums[index];
            }
            if(majority_Element == nums[index])
            {
                count++;
            }
            else if(majority_Element != nums[index])
            {
                count--;
            }
            index++;
        }
        return majority_Element;
    }
};
