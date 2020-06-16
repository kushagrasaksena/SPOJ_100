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
ll fact(ll n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}
int main()
{
	fast;
#ifndef ONLINE_JUDGE
	freopen("/home/kushagra/Desktop/Kushagra/input.txt", "r", stdin);
	freopen("/home/kushagra/Desktop/Kushagra/output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		cout << fact(n) << endl;
	}
	return 0;
}