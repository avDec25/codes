#include <iostream>
#include <unordered_map>
using namespace std;
#define int long long
unordered_map<int,int> m;
int ans(int n)
{
	if(!n) return 0;
	if(int s = m[n]) return s;
	return m[n] = max(n, ans(n/2)+ans(n/3)+ans(n/4));
}
#undef int
int main()
{
	long long n;
	while(cin >> n)
	{
		cout << ans(n) << "\n";
	}
	return 0;
}