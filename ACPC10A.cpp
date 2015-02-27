#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a1, a2, a3;
	while(cin >> a1 >> a2 >> a3)
	{
		if (a1 == 0 && a2 == 0 && a3 == 0)
		{
			break;
		}

		int ap1, ap2;
		ap1 = a2 - a1;
		ap2 = a3 - a2;
		if(ap1 == ap2)
		{
			cout << "AP " << ap1+a3;
		}
		else
		{
			double gp1 = (double)a2 / (double)a1;
			cout << "GP " << gp1*a3;	
		}
		cout << "\n";
	}
	return 0;
}