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
		string s, ans;
		cin >> s;
		ans = "";
		stack<char> op;
		stack<string> var;
		int n = s.length();
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^')
				op.push(s[i]);
			else if (s[i] == ')')
			{
				char ops = op.top();
				op.pop();
				string v1 = var.top();
				var.pop();
				string v2 = var.top();
				var.pop();
				ans = v2  + v1 + ops;
				var.push(ans);
			}
			else if (s[i] != '(')
			{
				string ch(1, s[i]);
				var.push(ch);
			}
		}
		cout << var.top() << endl;
	}
	return 0;
}