#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define fr1(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vii vector <pair<ll,ll> >
#define pb push_back
#define md 1000000007
int reverse(int x)
{
	int l = 0;
	while (x != 0)
	{
		l = l * 10;
		l = l + x % 10;
		x = x / 10;
	}
	return l;
}
int main()
{
	fast;
#ifndef ONLINE_JUDGE
	freopen("/home/kushagra/Desktop/Kushagra/input.txt", "r", stdin);
	freopen("/home/kushagra/Desktop/Kushagra/output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		x = reverse(x);
		y = reverse(y);

		int res = x + y;
		res = reverse(res);
		cout << res << endl;
	}
	return 0;
}