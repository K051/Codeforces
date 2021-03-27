#include <bits/stdc++.h>
using namespace std;

int main() {
	int _;
	cin >> _;
	while(_--) {
		int n,k;
		scanf("%d%d",&n, &k);
		string s;
		cin >> s;
		int l=0, r=n-1, ans=1;
		while(s[l] == '.') {
			l++;
		}
		while(s[r] == '.') {
			r--;
		}
		for(int i=l; i<r; i+=k) {
			while(s[i] == '.') {
				i--;
			}
			ans ++;
		}
		cout << ans << endl;
	}
	return 0;
}
