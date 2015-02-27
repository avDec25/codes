#include <bits/stdc++.h>
using namespace std;

int main()
{
	int K;
	while(cin >> K && K!=0)
	{
		int N, M;
		cin >> N >> M;

		while(K--)
		{
			int x, y;
			cin >> x >> y;
			if (x == N || y == M)
			{
				cout << "divisa";
			}
			else 
			{
				if (M - y > 0)
				{
					cout << "S";
				}
				else
					cout << "N";

				if (N-x > 0)
				{
					cout << "O";
				}
				else
					cout << "E";
			}
			cout << "\n";
		}
	}
	return 0;
}