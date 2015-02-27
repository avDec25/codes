#include <bits/stdc++.h>
using namespace std;

double curt(double x) {
  if (x == 0) {
    // would otherwise return something like 4.257959840008151e-109
    return 0;
  }
  double b = 1; // use any value except 0
  double last_b_1 = 0;
  double last_b_2 = 0;
  while (last_b_1 != b && last_b_2 != b) {
    last_b_1 = b;
    b = (b + x / b / b) / 2;
    last_b_2 = b;
    b = (b + x / b / b) / 2;
  }
  return b;
}

int main()
{
	int T;
	// cin >> T;
	scanf("%d", &T);
	while(T--)
	{
		int N;
		// cin >> N;
		scanf("%d", &N);
		int x;
		int S = 1;
		// vector<int> A;
		for(int i=0; i<N; ++i)
		{
			// cin >> x;
			scanf("%d", &x);
			S *= x;
			// A.push_back(x);
		}

		double Q = 0;
		int m = 2;
		int s = S;
		while(1)
		{
			Q = curt(S);
			if (floor(Q) == Q)
			    break;// cout << "It's whole";

			S = m*s;
			++m;
		}
		// cout << S %(1000000007) << "\n";
		printf("%d\n", S %(1000000007));
	}
	return 0;
}