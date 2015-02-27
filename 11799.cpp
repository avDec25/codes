//11799
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int i = 1;
	while(t--)
	{
		int N;
		cin >> N;
		--N;
		int mx;
		cin >> mx;
		int x;
		while(N--)
		{
			cin >> x;
			mx = max(mx, x);
		}

		cout << "Case " << i << ": " << mx << "\n";
		++i;
	}
	return 0;
}