#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int arr[n];
    int val=-1;
    for(int i=0 ; i<n ; ++i)
        cin>>arr[i];
    for(int i=0 ; i<n ; ++i)
    {
        if (k == arr[i])
        {
            val=i;
            break;
        }
    }
    if (val==-1)
        cout<<"NOT FOUND"<<endl;
    else
        cout<<"FOUND AT => "<<val+1<<endl;
    return 0;
}