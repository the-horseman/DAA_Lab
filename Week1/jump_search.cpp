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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int k;
        cin >> k;
        int st=0, en=-1;
        int i=0;
        int flag=0;
        while (pow(2,i+1)<n)
        {
            en=pow(2,i+1);
            i++;
            if (arr[st]<=k && arr[en]>=k)
            {
                flag=1;
                break;
            }
            st=en;
        }
        int ind=-1;
        if (flag==1)
        {
            for(int i=st ; i<en+1 ; ++i)
            {
                if (arr[i] == k)
                {
                    ind=i;
                    break;
                }
            }
            if (ind!=-1)
            {
                cout<<"Present "<<ind<<endl;
            }
            else
            {
                cout<<"Not Present "<<n<<endl;
            }
        }
        else
        {
            cout<<"Not Present "<<n<<endl;
        }
        
    }

    return 0;
}