#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int t;
	while(cin >> t && t != -1)
	{
		double mean_val = 0, candy;
		int count = 0;
		vector<int> vi;
		int T = t;
		while(T--)
		{
			cin >> candy;
			mean_val += candy;
			++count;
			vi.push_back(candy);
		}
		mean_val /= (double)count;

		double fracpart, intpart;
		fracpart = modf(mean_val, &intpart);

		if (fracpart == 0)
		{
			int ans = 0;
			for(auto it : vi)
			{
				if (it > mean_val)
				{
					ans = ans + it-mean_val;
				}
			}
			cout << ans << "\n";
		}
		else
		{
			cout << "-1\n";
		}
	}	
	return 0;
}