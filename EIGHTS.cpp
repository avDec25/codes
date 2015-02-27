#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
int compute(int k)
{
	return 192+250*(k-1);
}
#undef int
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long k;
		cin >> k;
		cout << compute(k) << "\n";
	}
	return 0;
}	