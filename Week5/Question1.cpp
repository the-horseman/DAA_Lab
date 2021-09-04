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
	for (int f = 0; f < no; f++)
	{
		int n;
		cin >> n;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		map<char, int> m;
		for (int i = 0; i < n; i++)
		{
			m[arr[i]]++;
		}
		int mx = INT_MIN;
		char ele = arr[0];
		for (auto x : m)
		{
			if (x.second > mx)
			{
				mx = x.second;
				ele = x.first;
			}
		}
		if (mx == 1)
			cout << "No Duplicates Found" << endl;
		else
			cout << ele << " - " << mx << endl;
	}

	return 0;
}