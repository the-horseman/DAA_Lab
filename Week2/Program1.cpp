#include <bits/stdc++.h>

#define vi vector<int>
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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int c;
        cin >> c;
        auto x = lower_bound(arr.begin(), arr.end(), c);
        auto y = lower_bound(arr.begin(), arr.end(), c + 1);
        int val = x - arr.begin();
        int val1 = y - arr.begin();
        if (val != arr.size() && arr[val] == c)
        {
            cout << c << " - " << (val1 - val) << endl;
        }
        else
        {
            cout<<"Key not present"<<endl;
        }
    }

    return 0;
}