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

struct UF
{
    vector<int> e;
    UF(int n){ e.assign(n, -1); }
    bool sameSet(int a, int b) {return find(a) == find(b);}
    int size(int x) { return -e[find(x)];}
    int find(int x) {return e[x] < 0? x: e[x] = find(e[x]);}
    bool join(int a, int b){
        a  = find(a); b = find(b);
        if(a == b) return false;
        if(e[a] > e[b]) swap(a,b);
        e[a] += e[b];
        e[b] = a;
        return true;
    }
};

struct edge 
{
	int wt, s, d;
	edge(int ww, int ss, int dd)
	{
		wt=ww;
		s=ss;
		d=dd;
	}
};

int kruskal(vector <vi> gra, int n)
{
	UF ufind(n);
	vector <edge> edges;
	for(int i=0 ; i<n ; ++i)
	{
		for(int j=0 ; j<n ; ++j)
		{
			if (gra[i][j] != 0)
			{
				edge val(gra[i][j], i, j);
				edges.pb(val);
			}
		}
	}
	auto cmp = [&](edge &a, edge &b)
	{
		return a.wt>b.wt;
	};
	sort(all(edges), cmp);
	int ans = 0;
	for (edge x : edges)
	{
		if (ufind.sameSet(x.s, x.d) == 0)
		{
			ufind.join(x.s, x.d);
			ans += x.wt;
		}
	}
	return ans;
}

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
		vector <vector <int>> gra;
		for(int i=0 ; i<n ; ++i)
		{
			vi ext(n);
			for(int j=0 ; j<n ; ++j)
			{
				cin>>ext[j];
			}
			gra.pb(ext);
		}
		int ans = kruskal(gra, n);
		cout<<ans<<endl;
	}
	
	return 0;
}