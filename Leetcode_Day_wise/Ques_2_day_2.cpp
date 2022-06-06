//maximum chunks to sorted 2-->(will optimize later)
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        long long int sortedSum = 0, normalSum = 0, chunks = 0 , index = 0;
        vector<int> arr2 = arr;
        sort(arr2.begin() , arr2.end());
        while(index != n)
        {
            sortedSum += arr2[index];
            normalSum += arr[index];
            if(sortedSum == normalSum)
                chunks++;
            index++;
        }
	return chunks;
    }
};
