#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int a = 1;
	while(cin >> n && n !=0)
	{
		vector<int> v;
		int x, sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			v.push_back(x);
			sum += x;
		}

		sum = sum/n;
		int moves = 0;
		for(auto it : v)
		{
			if (it != sum)
			{
				++moves;
			}
		}

		cout << "Set #" << a++;
		cout << "\nThe minimum number of moves is " << moves << ".\n";

	}
	return 0;
}