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

vector <string> tags;
map <string, string> atr;


void insert_atr( string & name, string & value) {
	string full;
	for( string & str : tags) {
		full += str + '.';
	}
	full.pop_back();
	full += '~' + name;
	atr[full] = value;
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();
	int n, q;
	string s;
	cin >> n >> q;


	f(i,0,n) {
	char c; cin >> c;

	if(cin.peek() == '/') {
		string end; cin >> end;
		tags.pop_back();
	}
	else {
		string tag_name; cin >> tag_name;
		// cout << tag_name << endl;

		if(tag_name.back() == '>') {
			tag_name.pop_back();
			tags.pb(tag_name);
		}
		else {
			tags.pb(tag_name);
			for(;;) {
				string atr_name, atr_value, eq;
				cin >> atr_name >> eq >> atr_value;
				if(atr_value.back() == '>') {

				atr_value.pop_back();
				atr_value.pop_back();
				atr_value = atr_value.substr(1);
				insert_atr(atr_name,atr_value);
				break; 
				}

				else {
					atr_value.pop_back();
					atr_value = atr_value.substr(1);
					insert_atr(atr_name, atr_value);
				}
			}
		 }
	  }
	}


	f(i,0,q) {
		string s;
		cin >> s;
		if(atr.find(s) != atr.end()) cout << atr[s] << endl;
		else cout << "Not Found!" << endl;
	}

   return 0;
}




















