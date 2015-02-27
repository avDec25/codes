#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int a = 1;
	while(cin >> n && n)
	{
		vector<int> bricks;
		int x, media= 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			bricks.push_back(x);
			media+= x;
		}

		media= media/n;
		int moves = 0;
		for(int i=0;i<n;i++)
		{
                 if(bricks[i]>media){
                     moves += bricks[i]- media;
                 }  
           } 

		cout << "Set #" << a;
		cout << "\nThe minimum number of moves is " << moves << ".\n\n";
		a++;
	}
	return 0;
}