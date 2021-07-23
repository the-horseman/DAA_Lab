#include <bits/stdc++.h>

#define vi vector<int>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no=1;
    cin >> no;
    for (int f = 0; f < no; f++)
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int n=10;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int indi=-1,indj=-1,indk=-1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int x = arr[i] + arr[j];
                int val = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
                if (val != arr.size() && arr[val] == x)
                {
                    indi=i+1;
                    indj=j+1;
                    indk=val+1;
                    break;
                }
            }
            if (indk!=-1)
                break;
        }
        cout<<indi<<" "<<indj<<" "<<indk<<endl;
        return 0;
    }
}