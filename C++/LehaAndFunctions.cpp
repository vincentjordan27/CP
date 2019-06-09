#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstring>

#define all(x) (x).begin,(x).end
#define rall(x) (x).rbegin,(x).rend

using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main()
{    
	int n;
	cin >> n;
	vector<pii> a(n),b(n);

	for(int i=0; i<n; i++) cin >> a[i].first, a[i].second=i;
	for(int i=0; i<n; i++) cin >> b[i].first, b[i].second=i;

	sort(all(a));
	sort(rall(b));

	vi ans(n);
	for(int i=0; i<n; i++) ans[b[i].second] = a[i].first;
	for (int x = ans) cout << x << ' ';
	cout << "\n";

	return 0;

}	





	return 0;
}