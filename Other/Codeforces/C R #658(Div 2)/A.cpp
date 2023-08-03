/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/
#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <cstdlib> 
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <tuple>
#include <string>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define ll long long 
#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define fi               first
#define s               second
#define pb              push_back
#define mp              make_pair
#define lli             long long int
#define inf             1e18
#define w(x)            int x; cin>>x; while(x--)
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define out cout<<
#define in cin>>
using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

w(x) {

	int n,m,a,b;
	int ab[1001] = {0};
	int ba[1001] = {0};

	cin >> n >> m;
	f(i,0,n) {
		cin >> a;
		ab[a]++;
	}

	vector <int> ans;

	f(i,0,m) {
		cin >> b;
		ba[b]++;
	}

	f(i,0,1001) {
		if(ab[i] != 0 && ba[i] != 0){
			ans.pb(i);
			break;
		}
	}

	int len = ans.size();

	if(!len) cout << "NO" << endl;

	else {
		cout << "YES" << endl;
		cout << len << " ";


		f(i,0,len) {
			cout << ans[i] << endl;
		}
	}
	// f(i,0,ans.size()) {
	// 	cout << ans.size() << " " << ans[i] << endl;
	// }

	// f(i,0,10) {
	// 	cout << a[i] << " ";
	// } 


}

   return 0;
}




















