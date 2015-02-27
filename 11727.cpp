//11727
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	int i = 1;

	while(T--)
	{
		vector<int> salary;
		int x;
		for (int i = 0; i < 3; ++i)
		{
			cin >> x;
			salary.push_back(x);
		}
		sort(salary.begin(), salary.end());

		cout << "Case " << i << ": " << salary[1] << "\n";
		i++;
	}

	return 0;
}	