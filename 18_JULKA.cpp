/*
 ▓█████▄  ▄████▄  ▓██   ██▓ ██▓███   ██░ ██ ▓█████  ██▀███
▒██▀ ██▌▒██▀ ▀█   ▒██  ██▒▓██░  ██▒▓██░ ██▒▓█   ▀ ▓██ ▒ ██▒
 ░██   █▌▒▓█    ▄   ▒██ ██░▓██░ ██▓▒▒██▀▀██░▒███   ▓██ ░▄█ ▒
 ░▓█▄   ▌▒▓▓▄ ▄██▒  ░ ▐██▓░▒██▄█▓▒ ▒░▓█ ░██ ▒▓█  ▄ ▒██▀▀█▄
 ░▒████▓ ▒ ▓███▀ ░  ░ ██▒▓░▒██▒ ░  ░░▓█▒░██▓░▒████▒░██▓ ▒██▒
  ▒▒▓  ▒ ░ ░▒ ▒  ░   ██▒▒▒ ▒▓▒░ ░  ░ ▒ ░░▒░▒░░ ▒░ ░░ ▒▓ ░▒▓░
  ░ ▒  ▒   ░  ▒    ▓██ ░▒░ ░▒ ░      ▒ ░▒░ ░ ░ ░  ░  ░▒ ░ ▒░
  ░ ░  ░ ░         ▒ ▒ ░░  ░░        ░  ░░ ░   ░     ░░   ░
    ░    ░ ░       ░ ░               ░  ░  ░   ░  ░   ░
  ░      ░         ░ ░
*/
//focus less on how much problem you should solve within a fixed time and focus more on getting the problem solved and
//learning something from it
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b) for(ll i=a; i<b; i++)
#define per(i,a,b) for(ll i=a; i>=b; i--)
#define ll long long int
#define ld long double
#define vi vector<ll>
#define vii vector <pair<ll,ll> >
#define sedes set <ll, greater <ll> >
#define seasc set <ll>
#define pb push_back
#define mkp make_pair
#define ff first
#define ss second
#define MOD 1000000007
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define umap unordered_map<ll, ll>
#define map map<ll, ll>
#define autoit(x,it) for(auto it = x.begin(); it != x.end(); it++)
#define mems(a, i) memset(a, i, sizeof(a))
#define endl '\n'
#define all(v) v.begin(),v.end()
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define printx(x) printf("%lld\n",x);
#define printxy(x,y) cout << x << y <<endl;
#define printxyz(x,y,z) cout << x << y << z <<endl;
#define deba(a) cout << #a << a << endl;
#define debab(a,b) cout << #a << a << #b << b << endl;
string findDiff(string str1, string str2)
{
	string str = "";
	int n1 = str1.length(), n2 = str2.length();
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;
	for (int i = 0; i < n2; i++)
	{
		int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
		if (sub < 0)
		{
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}
	for (int i = n2; i < n1; i++)
	{
		int sub = ((str1[i] - '0') - carry);
		if (sub < 0)
		{
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}
	reverse(str.begin(), str.end());

	return str;
}
int main()
{
	fast;
#ifndef ONLINE_JUDGE
	freopen("/home/kushagra/Desktop/Kushagra/input.txt", "r", stdin);
	freopen("/home/kushagra/Desktop/Kushagra/output.txt", "w", stdout);
#endif
	int t = 10;
	while (t--)
	{
		string a, b, c = "", ans = "";
		cin >> a >> b;
		if (a == "0" and b == "0")
		{
			cout << 0 << endl << 0;
			continue;
		}
		ll n = a.length();
		ll m = b.length();
		// rep(i, 0, 101)
		// ans += '0';
		rep(i, 0, (101 - n))
		c += '0';
		rep(i, 0, n)
		c += a[i];
		a = c;
		c = "";
		rep(i, 0, (101 - m))
		c += '0';
		rep(i, 0, m)
		c += b[i];
		b = c;

		// cout << a << endl << b << endl;

		// cout << b[100] << endl;
		ll carry = 0;
		for (int i = 100; i >= 0; i--)
		{
			ll j = a[i] - '0';
			ll k = b[i] - '0';
			ll req = j + k + carry;
			carry = req / 10;
			// cout << req << endl << carry << endl;
			// ans[i] = req % 10;
			ans += to_string(req % 10);
		}
		reverse(all(ans));
		// cout << ans << endl;;
		bool f = false;
		int start, prev = 0;
		for (int i = 0; i < 101; i++)
		{
			if (f == false and (ans[i] - '0') > 0)
			{
				start = i;
				break;
			}
		}
		// cout << start << endl;
		string mul = "";
		rep(i, 0, start)
		mul += '0';
		for (int i = start; i < 101; i++)
		{
			ll num = prev * 10 + (ans[i] - '0');
			mul += to_string(num / 2);
			prev = num % 2;
		}
		// cout << a << endl;
		// cout << mul << endl;
		f = false;
		int startmul = -1;
		for (int i = 0; i < 101; i++)
		{
			if (f == false and (mul[i] - '0') > 0)
			{
				startmul = i;
				break;
			}
		}
		if (startmul == -1)
			cout << 0 << endl;
		else
		{
			rep(i, startmul, 101)
			cout << mul[i];

		}
		cout << endl;
		string res =  findDiff(a, mul);
		start = -1, f = false;
		for (int i = 0; i < 101; i++)
		{
			if (f == false and (res[i] - '0') > 0)
			{
				start = i;
				break;
			}
		}
		if (start == -1)
			cout << 0 << endl;
		else
		{
			rep(i, start, 101)
			cout << res[i];

		}
		cout << endl;
		// cout << start << endl;

	}
	return 0;
}


