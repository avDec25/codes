#include <bits/stdc++.h>
// #include "prettyprint.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--)
	{
		int N;
		cin >> N;

		int h;
		vector<int> m;
		for (int i = 0; i < N; ++i)
		{
			cin >> h;
			m.push_back(h);
		}
		sort(m.begin(), m.end());
		
		vector<int> w;
		for (int i = 0; i < N; ++i)
		{
			cin >> h;
			w.push_back(h);
		}
		sort(w.begin(), w.end());

		int sum = 0;
		for (int i = 0; i < N; ++i)
		{
			sum += m[i]*w[i];
		}

		cout << sum << "\n";
	}
	return 0;
}