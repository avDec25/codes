#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long T;
	cin >> T;
	while(T--)
	{
		long long N, x, sum = 0;
		cin >> N;
		for (long long i = 0; i < N; ++i)
		{
			cin >> x;
			sum = (sum+x)%N;
		}
		if (sum == 0)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout << "\n";
	}
	return 0;
}