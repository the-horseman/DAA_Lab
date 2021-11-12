#include<bits/stdc++.h>

#define mod 1000000007
#define INF 1000000005
#define INFL 1000000000000000005ll
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define pb push_back
#define mp make_pair
#define gcd __gcd
#define pii pair<int, int>
#define vi vector <int>
#define vp vector<pii>
#define ll long long

using namespace std;

// DEBUG
void __PRINT(int x) {cout << x;}
void __PRINT(long x) {cout << x;}
void __PRINT(unsigned x) {cout << x;}
void __PRINT(unsigned long x) {cout << x;}
void __PRINT(unsigned long long x) {cout << x;}
void __PRINT(float x) {cout << x;}
void __PRINT(double x) {cout << x;}
void __PRINT(long double x) {cout << x;}
void __PRINT(char x) {cout << '\'' << x << '\'';}
void __PRINT(const char *x) {cout << '"' << x << '"';}
void __PRINT(const string &x) {cout << '"' << x << '"';}
void __PRINT(bool x) {cout << (x ? "true" : "false");}

template <typename T, typename V>
void __PRINT(const pair<T, V> &x);
template <typename T>
void __PRINT(const vector<T> &x);
template<typename T>
void __PRINT(const T &x);

template<typename T, typename V>
void __PRINT(const pair<T, V> &x) {cout << '{'; __PRINT(x.first); cout << ','; __PRINT(x.second); cout << "}";}
template<typename T, typename V, typename U>
void __PRINT(const tuple<T, V, U> &x) {cout << '{'; __PRINT(get<0>(x)); cout << ','; __PRINT(get<1>(x));cout << ',' << get<2>(x); cout << "}";}
template<typename T>
void _PRINT(const vector<T> &x) {cout << "{";for(int u69=0;u69<x.size();u69++){_PRINT(x[u69]);cout << (u69+1==x.size()?"":",");};cout << "}";}
template<typename T>
void __PRINT(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __PRINT(i); cout << "}";}
void _PRINT() {cout << "]"<<endl;}
template <typename T, typename... V>
void PRINT(T t, V... v) {_PRINT(t); if (sizeof...(v)) cout << ", "; _PRINT(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _PRINT(x)
#else
#define debug(x...)
#endif

struct jb
{
	int ind, st, end;
	jb(int ii, int ss, int ee)
	{
		ind = ii;
		st = ss;
		end = ee;
	}
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int no=1;
	// cin>>no;
	for (int f = 0; f < no; f++)
	{
		int n;
		cin>>n;
		vi arr1(n);
		for(int i=0 ; i<n ; ++i)
			cin>>arr1[i];
		vi arr2(n);
		for(int i=0 ; i<n ; ++i)
			cin>>arr2[i];
		vector <jb> jobs;
		for(int i=0 ; i<n ; ++i)
		{
			jb temp(i, arr1[i], arr2[i]);
			jobs.pb(temp);
		}
		auto cmp = [&](jb &a, jb &b)
		{
			return a.end<b.end;
		};
		sort(all(jobs), cmp);
		int job_end = 0;
		int ans = 0;
		vi index;
		for(int i=0 ; i<n ; ++i)
		{
			if (job_end+jobs[i].st <= jobs[i].end)
			{
				ans++;
				job_end += jobs[i].st;
				index.pb(jobs[i].ind+1);
			}
		}
		cout<<ans<<endl;
		sortall(index);
		for(int i=0 ; i<index.size(); ++i)
			cout<<index[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}

//                    ,.ood888888888888boo.,
//               .od888P^""            ""^Y888bo.
//           .od8P''   ..oood88888888booo.    ``Y8bo.
//        .odP'"  .ood8888888888888888888888boo.  "`Ybo.
//      .d8'   od8'd888888888f`8888't888888888b`8bo   `Yb.
//     d8'  od8^   8888888888[  `'  ]8888888888   ^8bo  `8b
//   .8P  d88'     8888888888P      Y8888888888     `88b  Y8.
//  d8' .d8'       `Y88888888'      `88888888P'       `8b. `8b
// .8P .88P            """"            """"            Y88. Y8.
// 88  888                                              888  88
// 88  888                                              888  88
// 88  888.        ..                        ..        .888  88
// `8b `88b,     d8888b.od8bo.      .od8bo.d8888b     ,d88' d8'
//  Y8. `Y88.    8888888888888b    d8888888888888    .88P' .8P
//   `8b  Y88b.  `88888888888888  88888888888888'  .d88P  d8'
//     Y8.  ^Y88bod8888888888888..8888888888888bod88P^  .8P
//      `Y8.   ^Y888888888888888LS888888888888888P^   .8P'
//        `^Yb.,  `^^Y8888888888888888888888P^^'  ,.dP^'
//           `^Y8b..   ``^^^Y88888888P^^^'    ..d8P^'
//               `^Y888bo.,            ,.od888P^'
//                    "`^^Y888888888888P^^'"