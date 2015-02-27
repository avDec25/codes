#include <iostream>
#include <cstring>
using namespace std;

bool allNines(string str, int len)
{
	for (int i = 0; i < len; ++i)
	{
		if(str[i] != '9')
			return false;
	}
	return true;
}

bool isSmaller(string orig, string str, int len)
{
	int i;
	for(i = 0; i < len; ++i)
	{
		if(orig[i] != str[i])
			break;
	}
	if (orig[i] >= str[i])
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printAns(string str, int len)
{
	string orig_str = str;

	//Normalize to a palindrome
	for (int i = 0; i < len/2; ++i)
	{
		str[len-i-1] = str[i];
	}
	if(!isSmaller(orig_str,str, len))
	{
		cout << str;
		return ;
	}
	if (allNines(str, len))
	{
		cout << '1';
		for(int i=0; i < len-1; ++i)
			cout << '0';
		cout << '1';
		return;
	}

	
	do
	{
		if(len & 1)
		{
			//odd length : only 1 center digit
			int c = len/2;
			if (str[c] == '9')
			{
				str[c] = '0';
				int x = 1;
				while(str[c-x]=='9')
				{
					str[c-x] = '0';
					str[c+x] = '0';
					++x;
				}
				str[c-x]++;
				str[c+x]++;
			}
			else
				str[c]++;
		}
		else
		{
			//even length : has 2 center digits
			int c1 = len/2;
			int c2 = (len/2)-1;
			if (str[c2] == '9')
			{
				str[c1] = '0';
				str[c2] = '0';
				int x = 1;
				while(str[c2-x] == '9')
				{
					str[c2-x] = '0';
					str[c1+x] = '0';
					++x;
				}
				str[c2-x]++;
				str[c1+x]++;	
			}
			else 
			{
				str[c1]++;
				str[c2]++;
			}
		}
	}while(isSmaller(orig_str,str, len));
	cout << str;
}

int main()
{
	int t;
	cin >> t;
	while(t--)	
	{
		string num;
		cin >> num;
		int len = num.length();
		if (allNines(num, len))
		{
			cout << '1';
			for(int i=0; i < len-1; ++i)
				cout << '0';
			cout << '1';
		}
		else
		{
			printAns(num, len);
		}
		cout << "\n";
	}
	return 0;
}