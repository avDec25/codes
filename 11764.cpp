//11764
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	int i = 1;
	while(t--)
	{
		int N;
		cin >> N;
		vector<int> v;
		int now, next;
		cin >> now;
		int high = 0;
		int low = 0;
		for (int i = 0; i < N-1; ++i)
		{
			cin >> next;
			if (now < next)
			{
				++high;
			}
			if (now > next)
			{
				++low;
			}
			now = next;
		}
		cout << "Case " << i << ": " << high << " " << low << "\n";
		++i;
	}
	return 0;
}