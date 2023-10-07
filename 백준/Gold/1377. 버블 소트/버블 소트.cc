#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

struct compare
{
	bool operator()(int a1, int a2)
	{
		int AbsA1 = abs(a1);
		int AbsA2 = abs(a2);

		if (AbsA1 == AbsA2)
			return a1 > a2;
		else
			return AbsA1 > AbsA2;
	}
};


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	int Max = 0;
	cin >> N;

	vector<pair<int, int>> A(N);


	for (int i = 0; i < N; ++i)
	{
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < N; ++i)
	{
		if (Max < A[i].second - i)
		{
			Max = A[i].second - i;
		}
	}

	cout << Max + 1;
}
