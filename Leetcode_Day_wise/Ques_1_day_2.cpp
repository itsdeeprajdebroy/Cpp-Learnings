//maxChunksToSorted
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr)
    {
        int n = arr.size();
        int index = 0, elements = 0, indexSum = 0, chunks = 0;
        while(index != n)
        {
            elements = elements + arr[index];
            indexSum = indexSum + index;
            if(elements == indexSum)
            {
                chunks++;
                index++;
            }
            else
                index++;
        }
        return chunks;
    }
};
