#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	float num;
	while(cin >> num && num)
	{
		int i;
		double sum = 0;
		for (i = 0; i < 275; ++i)
		{
			sum += 1.0/(2.0+i);
			if(sum >= num)
				break;
		}

		cout << i+1 << " card(s)\n";
	}	
	return 0;
}