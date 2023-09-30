#include <algorithm>
#include <deque>
#include <iostream>


int main()
{
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	int L;

	cin >> N >> L;

	int Array[N];
	deque<pair<int, int>> MinArr;

	for (int i = 0; i < N; ++i)
	{
		int Current;
		cin >> Current;

		while (!MinArr.empty() && MinArr.back().first > Current)
		{
			MinArr.pop_back();
		}

		MinArr.emplace_back(Current, i);

		if (MinArr.front().second <= i - L)
		{
			MinArr.pop_front();
		}
		cout << MinArr.front().first << ' ';
	}
}
