//Capacity To Ship Packages Within D Days
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long int low = *max_element(weights.begin(), weights.end()), sum = 0;
        for(int i = 0; i < weights.size(); i++)
            sum += weights[i];
        long int mid = 0, high = sum, count = 1, newSum = 0;
        while(low <= high)
        {
            count = 1;//updating
            newSum = 0;//updating
            mid = (low + high)/2;
            for(int i = 0; i < weights.size(); i++)
            {
                newSum += weights[i];
                if(newSum > mid)
                {
                    newSum = weights[i];
                    count++;
                }
            }
            if(low == high)
                return low;//to stop infinite loop
            if(count > days)
                low = mid + 1;
            else if(count <= days)
                high = mid;//checking if other options also available
        }
        return 0;
    }
};
