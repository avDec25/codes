//11942
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	cout << "Lumberjacks:\n";
	while(N--)
	{
		bool ascending = true;
		bool descending = true;

		int now, next;
		cin >> now;
		for (int i = 0; i < 9; ++i)
		{
			cin >> next;
			if (now < next)
			{
				descending = false;
			}
			if (now > next)
			{
				ascending = false;
			}
		}

		if ((!ascending && !descending) || (ascending && descending))
		{
			cout << "Unordered";
		}		
		else if (ascending || descending)
		{
			cout << "Ordered";
		}
		cout << "\n";

	}

	return 0;
}