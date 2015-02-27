#include <bits/stdc++.h>
using namespace std;

char matrix[10000][10000];

int main(int argc, char const *argv[])
{
	int n;
	while(cin >> n)
	{
		string str;
		cin >> str;
		bool toggle = true;
		unsigned i = 0;
		int row = 0;
		while (i < str.length())
		{
			if(toggle)
			{
				for (int col = 0; col < n; ++col)
				{
					matrix[row][col] = str[i];
					++i;
				}
			}
			else
			{
				for (int col = n-1; col >= 0; --col)
				{
					matrix[row][col] = str[i];
					++i;
				}
			}
			toggle = !toggle;
			++row;
		}

		for (int c = 0; c < n; ++c)
		{
			for (int r = 0; r < row; ++r)
			{
				cout << matrix[r][c];
			}
		}
		cout << "\n";
	}
	return 0;
}