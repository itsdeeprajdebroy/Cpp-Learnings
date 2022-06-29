//segregate0and1
//approach 1
class Solution{
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int count0 = 0, count1 = 0, index = 0;
        while(index != n)
        {
            if(arr[index] == 0)
                count0++;
            index++;
        }
        index = 0;
        bool flag = false;
        while(index != n)
        {
            if(count0 == 0)
            {
                flag = true;
            }
            if(count0 != 0)
            {
                arr[index] = 0;
                count0--;
            }
            if(flag)
            {
                arr[index] = 1;
            }
            index++;
        }
    }
};
