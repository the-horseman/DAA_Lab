#include<bits/stdc++.h>

#define mod 1000000007
#define INF 2147483637
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
#define vi vector <int>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no=1;
    // cin>>no;
    for (int f = 0; f < no; f++)
    {
        vi ans;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; ++i)
            cin>>arr[i];
        int m;
        cin>>m;
        int arr1[m];
        for(int i=0 ; i<m ; ++i)
            cin>>arr1[i];
        int i=0;
        int j=0;
        while (i<n && j<m)
        {
            if (arr[i] == arr1[j])
            {
                ans.pb(arr[i]);
                i++;
                j++;
            }
            else
            {
                if (arr[i]<arr1[j])
                    i++;
                else
                    j++;
            }

        }
        for(int i=0 ; i<ans.size() ; ++i)
            cout<<ans[i]<<" ";
        
    }
    
    return 0;
}