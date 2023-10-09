#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

//struct compare
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
//};


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	vector<int> A;

	cin >> N;
	A.reserve(N);

	for (int i = 0; i < N; ++i)
	{
		int V;
		cin >> V;
		A.push_back(V);
	}

	sort(A.begin(), A.end());

	int Sum = 0;
	int TotalTime = 0;

	for (int T : A)
	{
		Sum += T;
		TotalTime += Sum;
	}

	cout << TotalTime;
}
