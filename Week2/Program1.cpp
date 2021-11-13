#include <bits/stdc++.h>

using namespace std;

int binary_search(int a[], int l, int key, bool find_first_occurence)
{
    int b = 0, e = l - 1;
    while (b <= e)
    {
        int mid = (b + e) / 2;
        if (a[mid] == key)
        {
            if (find_first_occurence)
            {
                if (mid == 0 || a[mid - 1] < a[mid])
                    return mid;
                else
                    e = mid - 1;
            }
            else
            {
                if (mid == l - 1 || a[mid + 1] > a[mid])
                    return mid;
                else
                    b = mid + 1;
            }
        }
        else if (a[mid] > key)
            e = mid - 1;
        else
            b = mid + 1;
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int z = 0; z < n; ++z)
    {
        int l;
        cin >> l;
        int a[l];
        for (int i = 0; i < l; ++i)
            cin >> a[i];
        int key;
        cin >> key;
        int first_occurence = binary_search(a, l, key, true);
        if (first_occurence >= 0)
        {
            int last_occurence = binary_search(a, l, key, false);
            cout << key << " - " << last_occurence - first_occurence + 1 << endl;
            continue;
        }
        cout << "Key Not Found" << endl;
    }
    return 0;
}
