#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <unistd.h>
#include <utility>
#include <vector>
#define dbg(args...) //fprintf(stderr, args)
#define dbc(x) //cerr << x << '\n'
#define dbn(x) cerr << #x << " == " << x << '\n'
#define m(v,x) memset(v,x,sizeof(v))
#define pb push_back
#define endl '\n'
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const int INF = 0x3f3f3f3f;

//

const int ob = 100;

int f(int n, int sum) { 
	if (sum > ob) {
		return 0;
	}

	if (sum == ob) {
		return 1;
	}

	int ways = 0;

	for (int i=min(n, ob-sum); i>=1; i--) {
		ways +=	f(i, sum+i);
	}

	return ways;
}

int main(){
	ios::sync_with_stdio(false), cin.tie(0);

	cout << f(ob, 0) - 1 << endl;
}