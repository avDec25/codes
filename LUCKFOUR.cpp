#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	
	while(T--)
	{
		string line;
		cin >> line;
		int sum = 0;
		for(auto ch : line)
		{
			if (ch == '4')
			{
				++sum;
			}
		}
		cout << sum << "\n";
	}

	return 0;
}