#include <bits/stdc++.h>
using namespace std;

long long f(long long N)
{
	if (N/10 > 0)
	{
		long long sum = 0;
		while (N)
		{
			sum += N%10;
			N /= 10;
		}
		return f(sum);
	}
	else
		return N;
}

int main()
{
	long long n;
	while(cin >> n && n!=0)
	{
		cout << f(n) << "\n";
	}
	return 0;
}