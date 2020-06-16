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
bool isPrime(int n)
{
	if (n == 1) {
		return false;
	}
	int i = 2;
	while (i * i <= n)
	{
		if (n % i == 0)
			return false;
		i += 1;
	}
	return true;
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
		int n, m;
		cin >> n >> m;
		for (int i = n; i <= m; i++)
		{
			if (isPrime(i))
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}