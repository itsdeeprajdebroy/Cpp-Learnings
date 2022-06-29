//Maximize Distance to Closest Person
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size(), startElement = seats[0], maxCount = INT_MIN;
        int count = 0, index = 1;
        if(seats[0] == 0)
        {
            count++;
        }
        while(index != n)
        {
            if(seats[index] == 0)
            {
                count++;
            }
            else if(startElement == 1 && seats[index] == 1)
            {
                if(count % 2 == 1)
                    count = (count / 2) + 1;
                else
                     count = (count / 2);
                if(count > maxCount)
                    maxCount = count;
                startElement = seats[index];
                count = 0;
            }
            else if(startElement == 0 && seats[index] == 1)
            {
                if(count > maxCount)
                {
                    maxCount = count;
                }
                startElement = seats[index];
                count = 0;
            }
            index++;
        }
            if(seats[n - 1] == 0)
            {
                if(count > maxCount)
                {
                    maxCount = count;
                }
            }
        return maxCount;
    }
};
