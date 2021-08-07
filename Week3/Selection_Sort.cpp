// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp, int &ans1)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    ++ans1;
}

void selectionSort(int arr[], int n, int &ans1, int &ans2)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
            ++ans2;
        }

        swap(&arr[min_idx], &arr[i], ans1);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {-23, 65, -31, 76, 46, 89, 45, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans1 = 0, ans2 = 0;
    selectionSort(arr, n, ans1, ans2);
    cout << "Sorted array: \n";
    printArray(arr, n);
    cout << ans2 << " " << ans1 << endl;
    return 0;
}
