//Sort Array By Parity
//dutch national flag algo
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n = arr.size() - 1, low = 0, mid = 0, high = n;
        while(mid <= high)
        {
            switch(arr[mid] % 2)
            {
                case 0: mid++;
                        low++;
                        break;
                    
                case 1: swap(arr[mid] , arr[high]);
                        high--;
                        break;
            }
        }
        return arr;
    }
};
