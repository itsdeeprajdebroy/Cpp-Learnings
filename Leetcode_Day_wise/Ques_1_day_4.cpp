// Reach a Number
class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int num = 0, steps = 1;
        while(target > num)
        {
            num = num + steps;
            steps++;
        }
        while((num - target) % 2 == 1)
        {
            num = num + steps;
            steps++;
        }
        return steps - 1;
    }
};
