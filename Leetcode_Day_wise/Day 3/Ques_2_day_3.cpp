//approach 1
//sort012
void sort012(int arr[], int n)
{
    int count0 = 0, count1 = 0, index = 0;
    while(index != n)
    {
        if(arr[index] == 0)
        {
            count0++;
        }
        else if(arr[index] == 1)
        {
            count1++;
        }
        index++;
    }
    int var = 0;
    index = 0;
    while(index != n)
    {
        switch (var)
        {
          case 0: arr[index] = 0;
                  count0--;
                  if(count0 == 0)
                  {
                      var = 1;
                  }
                  break;
          case 1: arr[index] = 1;
                  count1--;
                  if(count1 == 0)
                  {
                      var = 2;
                  }
                  break;
          case 2: arr[index] = 2;
                  break;
        }
        index++;
    }
}
//Dutch national flag algo
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {

        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}
