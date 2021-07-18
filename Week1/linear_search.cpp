#include <bits/stdc++.h>

#define ll long long
using namespace std;

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
        int val = -1;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        cin >> k;
        for (int i = 0; i < n; ++i)
        {
            if (k == arr[i])
            {
                val = i;
                break;
            }
        }
        if (val == -1)
            cout << "Not Present " << n << endl;
        else
            cout << "Present " << val + 1 << endl;
    }

    return 0;
}