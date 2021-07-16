#include <bits/stdc++.h>

#define ll long long
using namespace std;

int val = 0;

int Binary_Search(int arr[], int left, int right, int fin)
{
    if (left <= right)
    {
        ++val;
        int mid = (left + right) / 2;
        if (arr[mid] == fin)
            return mid;
        if (arr[mid] > fin)
            return Binary_Search(arr, left, mid - 1, fin);
        if (arr[mid] < fin)
            return Binary_Search(arr, mid + 1, right, fin);
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no;
    cin >> no;
    for (int f = 0; f < no; f++)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        cin >> k;
        val = 0;
        int ind = Binary_Search(arr, 0, n - 1, k);
        if (ind == -1)
            cout << "Not Present " << n << endl;
        else
            cout << "Present " << ind + 1 << endl;
    }

    return 0;
}