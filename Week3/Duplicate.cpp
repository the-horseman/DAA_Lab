#include<bits/stdc++.h>

#define vi vector <int>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no=1;
    cin>>no;
    for (int f = 0; f < no; f++)
    {
        int n=6;
        cin>>n;
        // int arr[n] = {28,14,52,83,14,75};
        int arr[n];
        for(int i=0 ; i<n ; ++i)
            cin>>arr[i];
        sort(arr,arr+n);
        int ans=0;
        for(int i=0 ; i<n-1 ; ++i)
        {
            if(arr[i] == arr[i+1])
            {
                ans=1;
                break;
            }
        }
        if (ans==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    
    return 0;
}