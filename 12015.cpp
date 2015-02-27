#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int k = 1;
	while(T--)
	{
		cout << "Case #" << k << ":\n";

		int x;
		string s;
		vector<string> vs;
		vector<int> vv;
		int mx = -1;

		for (int i = 0; i < 10; ++i)
		{
			cin >> s;
			vs.push_back(s);
			cin >> x;
			vv.push_back(x);
			mx = max(mx,x);
		}

		for (int i = 0; i < 10; ++i)
		{
			if(vv[i] == mx)
				cout << vs[i] << "\n";
		}
		++k;
	}
	return 0;
}