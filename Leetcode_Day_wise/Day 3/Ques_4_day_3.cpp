//Partition Labels
class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> myMap;
        vector<int> length;
        int i = 0, l = s.length();
        while(i != l)
        {
            myMap[s[i]] = i;
            i++;
        }
        int index = 0;
        int startIndex = 0, endIndex = myMap[s[startIndex]], newIndex = 0;
        while(index != l)
        {
            newIndex = myMap[s[index]];
            if(newIndex > endIndex)
            {
                endIndex = newIndex;
            }
            if(index == endIndex)
            {
                length.push_back(endIndex - startIndex + 1);
                startIndex = endIndex + 1;
            }
            index++;
        }
        return length;
    }
};
