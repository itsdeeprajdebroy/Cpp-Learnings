class Solution {
public:
    string reverse(string& nums , int start , int end)
    {
        while(start < end)
        {
            swap(nums[start] , nums[end]);
            start++;
            end--;
        }
        return nums;
    }

    int nextGreaterElement(int n)
    {
        auto digit = to_string(n);
        int size = digit.length();
        int index = size - 2;
        while(index != -1)
        {
            if(digit[index] >= digit[index + 1])
            {
                index--;
            }
            else
            {
                break;
            }
        }
        if(index == -1)
            return -1;

        int nextIndex = size - 1;
        while(nextIndex > index)
        {
            if(digit[index] < digit[nextIndex])
            {
                swap(digit[index] , digit[nextIndex]);
                break;
            }
            else
            {
                nextIndex--;
            }
        }
        reverse(digit , index + 1 , size - 1);
        auto res = stoll(digit);
        if(res > INT_MAX)
        {
            return -1;
        }
        else
            return res;
    }
};
