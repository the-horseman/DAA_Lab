#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n, int &ans1, int &ans2)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (++ans2 && j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            ans1++;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no = 1;
    cin >> no;
    for (int f = 0; f < no; f++)
    {
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
        int arr[] = {-23, 65, -31, 76, 46, 89, 45, 32};
        int n = sizeof(arr) / sizeof(arr[0]);

        int ans1=0,ans2=0;
        insertionSort(arr, n, ans1, ans2);
        printArray(arr, n);
        cout<<ans2<<" "<<ans1<<endl;
    }
    return 0;
}