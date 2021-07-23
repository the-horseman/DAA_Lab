#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no = 1;
    cin >> no;
    for (int f = 0; f < no; f++)
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int n = 10;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int k = 4;
        cin >> k;
        int ans = 0;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; ++i)
        {
            int x = k + arr[i];
            int val = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
            // cout<<x<<"  "<<val<<endl;
            if (val != arr.size() && arr[val] == x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}