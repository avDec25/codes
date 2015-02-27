#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)	
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			printf(">\n");
		}
		else if (a < b)
		{
			printf("<\n");
		}
		else
			printf("=\n");

	}
	return 0;
}