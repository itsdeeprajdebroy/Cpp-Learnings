class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size(), index = 0;
        int countTop = 0, countBot = 0;
        map<int , int> topMap;
        map<int , int> botMap;
        while(index != n)
        {
            topMap[tops[index]]++;
            botMap[bottoms[index]]++;
            index++;
        }
        index = 0;
        int topMax = -1, botMax = -1, max = 0, maxVar = 0;
        while(index != n)
        {
            if(topMap[tops[index]] >= topMax)
            {
                topMax = topMap[tops[index]];
                maxVar = tops[index];
            }
            if(botMap[bottoms[index]] >= botMax)
            {
                botMax = botMap[bottoms[index]];
                maxVar = bottoms[index];
            }
            index++;
        }
        if(topMax > botMax)
        {
            max = topMax;
        }
        else
            max = botMax;
        index = 0;
        while(index != n)
        {
            if(tops[index] == maxVar)
            {
                countTop++;
            }
            else if(bottoms[index] == maxVar)
            {
                countBot++;
            }
            else if(tops[index] != maxVar && bottoms[index] != maxVar)
                return -1;
            index++;
        }
        return (n - max);
    }
};
