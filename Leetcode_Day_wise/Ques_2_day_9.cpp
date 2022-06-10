#include<iostream>
#include<vector>
using namespace std;

int rowFinder(vector<vector<int>>& matrix, int row, int col, int target)
{
    int start = 0, end = row - 1, mid = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(target >= matrix[mid][0] && matrix[mid][col - 1] >= target)
            return mid;
        else if(matrix[mid][0] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
bool binarySearch(vector<vector<int>>& matrix, int col, int target, int row)
{
    int start = 0, end = col - 1, mid = 0;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(matrix[row][mid] == target)
            return true;
        else if(matrix[row][mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size();
    if(target > matrix[row - 1][col - 1] || target < matrix[0][0])
        return false;
    int targetRow = rowFinder(matrix, row, col, target);
    if(targetRow == -1)
        return false;
    bool isTarget = binarySearch(matrix, col, target, targetRow);
    if(isTarget)
        return true;
    else
        return false;
}

int main()
{
  vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int target = 3;
  bool yedd = searchMatrix(matrix , target);
  cout<<yedd;
}
