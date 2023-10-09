#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

// struct compare
//{
//	bool operator()(int a1, int a2)
//	{
//		int AbsA1 = abs(a1);
//		int AbsA2 = abs(a2);
//
//		if (AbsA1 == AbsA2)
//			return a1 > a2;
//		else
//			return AbsA1 > AbsA2;
//	}
// };


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;
	int A[10001] = {0};
	int Number = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> Number;
		A[Number]++;
	}

	for (int  i = 0; i <= 10000; ++i)
	{
		if (A[i] != 0)
		{
			for (int j = 0; j < A[i]; ++j)
			{
				cout << i << "\n";
			}
		}
	}



}
