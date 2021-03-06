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
#define dbc(x) cerr << x << "\n"
#define dbn(x) cerr << #x << " == " << x << "\n"
#define m(v,x) memset(v,x,sizeof(v))
#define pb push_back
#define eb emplace_back
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const int INF = 0x3f3f3f3f;

//

multiset<int> ms;

int main(){
	ios::sync_with_stdio(false);

	int t; cin >> t;

	for (int i=1; i<=t; i++) {
		int n; cin >> n;
		int trips = 0;

		ms.clear();

		for (int j=0; j<n; j++) {
			int w; cin >> w;
			ms.insert(w);
		}

		while (ms.size()) {
			int big = *(--ms.end());
			ms.erase(--ms.end());

			int need = (50 + big - 1) / big;

			if (ms.size() >= need - 1) {
				for (int j=0; j<need - 1; j++) {
					ms.erase(ms.begin());
				}

				trips++;
			} else break;
		}

		cout << "Case #" << i << ": " << trips << endl;
	}
}
