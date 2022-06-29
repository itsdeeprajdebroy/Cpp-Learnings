//Spiral Traversal of a matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0, right = matrix[0].size() - 1, top = 0, bott = matrix.size() - 1;
        int target = matrix[0].size() * matrix.size(),counter = 0;
        vector<int> v;
        while(true)
        {
            for(int i = left; i <= right; i++)
            {
                v.push_back(matrix[top][i]);
                counter++;
            }
            if(counter == target)
                break;
            top++;
            for(int i = top; i <= bott; i++)
            {
                v.push_back(matrix[i][right]);
                counter++;
            }
            if(counter == target)
                break;
            right--;
            for(int i = right; i >= left; i--)
            {
                v.push_back(matrix[bott][i]);
                counter++;
            }
            if(counter == target)
                break;
            bott--;
            for(int i = bott; i >= top; i--)
            {
                v.push_back(matrix[i][left]);
                counter++;
            }
            if(counter == target)
                break;
            left++;
        }
        return v;
    }
};
