// C++ program to sort an array with 0, 1 and 2 in a single pass
#include <iostream>
using namespace std;
void sort012(int arr[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (arr[mid])
        {

        case 0:
            swap(arr[lo++], arr[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}

void printarr(int array[], int arr_size)
{

    for (int i = 0; i < arr_size; i++)
        cout << array[i] << " ";
}

int main()
{
    int array[] = {2, 0, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(array) / sizeof(array[0]);

    sort012(array, n);

    printarr(array, n);

    return 0;
}
