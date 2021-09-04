#include <bits/stdc++.h>

#define mod 1000000007
#define INF 2147483637
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
#define vi vector<int>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no = 1;
    cin >> no;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int f = 0; f < no; f++)
    {
        vector<pair<int, int>> v;
        int k;
        cin >> k;
        for (int i = 0; i < n; ++i)
        {
            int x = (k - arr[i]);
            int ind = lower_bound(arr + i + 1, arr + n, x) - arr;
            if (ind < n && arr[ind] == x)
                v.push_back(make_pair(arr[i], x));
        }
        if (v.size() > 0)
        {
            for (auto x : v)
                cout << x.first << " , " << x.second << endl;
        }
        else
        {
            cout<<"Not Possible"<<endl;
        }
    }

    return 0;
}