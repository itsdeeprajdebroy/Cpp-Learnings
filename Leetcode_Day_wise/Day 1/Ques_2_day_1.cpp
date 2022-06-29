//Rotate array
//Approach-1
class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();
        if(n < k)
        {
            k = k % n;
        }
        int end = nums.size() - 1;
        int i = end - k + 1;
        int j = 0;
        vector<int> v(k);
        while(i != (end + 1))
        {
            v[j] = nums[i];
            i++;
            j++;
        }
        int index = end - k;
        while(index != -1)
        {
            swap(nums[index],nums[end]);
            end--;
            index--;
        }
        int newIndex = 0;
        while(newIndex != k)
        {
            nums[newIndex] = v[newIndex];
            newIndex++;
        }
    }
};

//Approach-2
class Solution {
public:
    vector<int> reverse(vector<int>& nums , int start, int end)
    {
        while(start < end)
        {
            swap(nums[start] , nums[end]);
            start++;
            end--;
        }
        return nums;
    }
    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();
        int end = n - 1;
        if(k > n)
        {
            k = k % n;
        }
        reverse(nums , (end - k + 1) , end);
        reverse(nums , 0 , (end - k));
        reverse(nums , 0 , end);
    }
};
