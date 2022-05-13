#include<iostream>
using namespace std;
//insertion sort
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i], j;
        for (j = i - 1; j >= 0; j--)
        {
          if (arr[j] > temp)
          {
            arr[j + 1] = arr[j];
          }
          else
            break;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
