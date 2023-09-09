#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 5;
int n, k;
int a[maxN];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];

	sort(a + 1, a + 1 + n);
	long long minS = 0, maxS = 0;
	for (int i = 1; i <= k; i++)
		minS += a[i];
	for (int i = n - k; i <= n - 1; i++)
		maxS += a[i];
	cout << minS << ' ' << maxS << '\n';
}
