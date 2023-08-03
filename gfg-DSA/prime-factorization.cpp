
/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define f               first
#define s               second
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define inf             1e18
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int a[1000001];

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

// Factorisation in 0(logn) time
void sieve() {
	int max = 1000000;

	for (int i = 1; i <= max ; ++i) a[i] = -1;

	for (int i = 2; i <= max ; ++i)
	{
		if (a[i] == -1) {
			for (int j = i; j <= max; j += i)
			{
				if (a[j] == -1) a[j] = i;
			}
		}
	}
}

vi pf(int n) {
	vi res;
	while (n != 1) {
		res.pb(a[n]);
		n /= a[n];
	}

	res.pb(1);

	return res;
}


int32_t main()
{
	abhisheknaiidu();
	sieve();
	int n;
	cin >> n;

	vi p = pf(n);

	for (int i = 0; i < p.size(); ++i)
	{
		cout << p[i] << " ";
	}

	// Normal Factorization in O(sqrt) time
	// If n is composite number then there will be a
	// prime number below sqrt(n)
	for (int i = 2; i * i <= n; ++i)
	{

		if (n % i == 0) {

			int count = 0;
			while (n % i == 0) {
				n /= i;
				count++;
			}
			cout << i << "^" << count << " " << endl ;
		}
	}

	// If n is prime number, then there will be no prime
	// divisors below sqrt(n)
	//Means n is a prime number now to the power n.
	if (n > 1)
	{
		cout << n << "^" << 1 << endl;
	}

	return 0;
}

