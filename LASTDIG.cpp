#include <bits/stdc++.h>
using namespace std;
int power(long long a, long long b)
{
    if(a == 0 && b == 0)    return 0;
    int ans = 1;
    while(b > 0)
    {
        if(b%2 == 1)
            ans *= a;
        a *= a;
        a %= 10;
        ans %= 10;
        b /= 2;
        if(ans == 0)    break;
    }
    return ans;
}
int main()
{
	int t;
	// cin >> t;
	scanf("%d", &t);
	while(t--)
	{
		int a,b;
		// cin >> a >> b;
		scanf("%d%d", &a,&b);
		printf("%d\n", power(a,b));
	}
	return 0;
}