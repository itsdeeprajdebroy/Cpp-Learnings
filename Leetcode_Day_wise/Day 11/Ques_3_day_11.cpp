//Koko Eating Bananas
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long int low = 1, high = *max_element(piles.begin(), piles.end());
        long int mid = 0, count;
        while(low <= high)
        {
            count = 0;
            mid = (low + high)/2;
            for(int i = 0; i < piles.size(); i++)
                if(piles[i] % mid == 0)
                    count = count + (piles[i] / mid);
                else
                    count = count + (piles[i] / mid) + 1;
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
